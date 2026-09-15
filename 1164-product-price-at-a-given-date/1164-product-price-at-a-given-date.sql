with filtered_data as (
    select *,
        row_number() over(
            partition by product_id 
            order by change_date desc
        ) as rn
    from Products
    where change_date <= '2019-08-16'
),
latest_prices as (
    select product_id, new_price as price
    from filtered_data
    where rn = 1
),
all_products as (
    select distinct product_id from Products
)
select ap.product_id, 
       case when lp.price is null then 10 else lp.price end as price
from all_products ap
left join latest_prices lp on ap.product_id = lp.product_id;