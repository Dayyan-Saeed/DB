Create database order_system;
use order_system;
show tables;

Create table agents(

agent_code char(6) not null,
agent_name char(4),
working_area char(35),
commission decimal(10,2),
phone_no char(15),
country varchar(25)


);


Create table orders(

ord_num decimal(6,0) not null,
ord_amount decimal(12,2),
advance_amount decimal(12,2),
ord_data Date,
ord_description varchar(60)


);