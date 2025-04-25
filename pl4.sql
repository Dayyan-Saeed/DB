create database pl4;
use pl4;

create table student(

id int (11) primary key,
marks int (11),
age int(11),
gender varchar(1),
city int(11) 

);

create table city(
 cid int(11),
 cityname varchar(20)
 
 );
 
 INSERT INTO student (id, marks, age, gender, city)
VALUES (1, 85, 20, 'M', 1),
       (2, 92, 22, 'F', 2),
       (3, 78, 21, 'M', 3);


INSERT INTO city (cid, cityname)
VALUES (1, 'New York'),
       (2, 'London'),
       (3, 'Paris');

 
 
 
 -- Add the foreign key constraint to the STUDENT table
ALTER TABLE student
ADD CONSTRAINT fk_city
FOREIGN KEY (city)
REFERENCES city(cid);


-- Create VIEW View1
CREATE VIEW View1 AS
SELECT *
FROM student
INNER JOIN city ON city.cid = student.id;

select * from View1;





-- Create VIEW View2
CREATE VIEW View2 AS
SELECT student.*, city.cityname
FROM student
INNER JOIN city ON city.cid = student.city;


-- Create VIEW View3
CREATE VIEW View3 AS
SELECT id, age, gender, city
FROM student;

 
select * from View2;
select * from View3;

