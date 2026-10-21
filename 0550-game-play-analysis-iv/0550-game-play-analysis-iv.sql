select  ROUND(count(player_id) / (select count(DISTINCT player_id) from Activity), 2) as fraction
from Activity
where (player_id, event_date) IN 
                             ( select player_id, date_add(MIN(event_date), interval 1 day)
                             from Activity
                             group by player_id);