/* Write your T-SQL query statement below */
SELECT patient_id,patient_name,conditions
From Patients
Where conditions LIKE 'DIAB1%'
 OR conditions LIKE '% DIAB1%'