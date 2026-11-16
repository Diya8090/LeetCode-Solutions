/* Write your T-SQL query statement below */
Select p.product_id,isnull(round(sum(p.price*u.units)*1.0/ NULLIF(SUM(u.units), 0),
                                        2),
                                        0) as average_price
From prices p 
left join UnitsSold u
on p.product_id= u.product_id
AND u.purchase_date BETWEEN p.start_date AND p.end_date
GROUP BY p.product_id