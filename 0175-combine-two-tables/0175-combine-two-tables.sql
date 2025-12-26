SELECT p.firstName,p.lastName,a.city,a.state
FROM person p
LEFT JOIN Address a
ON p.personId = a.personId;