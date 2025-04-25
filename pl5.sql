create database pl5;
use pl5;

CREATE TABLE Employee (
  id INT AUTO_INCREMENT PRIMARY KEY,
  name VARCHAR(50),
  age INT,
  email VARCHAR(100)
);

INSERT INTO Employee (name, age, email) VALUES
  ('ALi', 25, 'john@gmail.com'),
  ('Smith', 30, 'smith@gmail.com'),
  ('Ahmad', 35, 'ahmad@gmail.com'),
  ('Sarah', 28, 'sarah@gmail.com'),
  ('Umar', 32, 'umar@gmail.com');

-- Q1
DELIMITER //
CREATE PROCEDURE SelectNameAndAge()
BEGIN
  SELECT name, age FROM Employee;
END//
DELIMITER ;

-- Q2
DELIMITER //
CREATE PROCEDURE SelectEmployeeById(IN empId INT)
BEGIN
  SELECT * FROM Employee WHERE id = empId;
END//
DELIMITER ;

-- Q3
DELIMITER //
CREATE PROCEDURE PrintEmployee(IN empId INT, IN empName VARCHAR(50))
BEGIN
  SELECT * FROM Employee WHERE id = empId AND name = empName;
END//
DELIMITER ;


CALL SelectNameAndAge();
CALL SelectEmployeeById(4);
CALL PrintEmployee(5, 'Umar');




