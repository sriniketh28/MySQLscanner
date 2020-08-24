#!/bin/bash

echo "Enter you network IP : "
read nip

nmap -sT $nip/24 -p 3306 > /dev/null -oG MySQLscan

cat MySQLscan | grep open > MySQLscan2

cat MySQLscan2


