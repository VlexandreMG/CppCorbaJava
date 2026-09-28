-- Active: 1789993741976@@127.0.0.1@3306@test_db
CREATE DATABASE IF NOT EXISTS test_db;

USE test_db;

CREATE TABLE IF NOT EXISTS system_logs (
    id INT PRIMARY KEY,
    niveau VARCHAR(10),
    message varchar(50)
);