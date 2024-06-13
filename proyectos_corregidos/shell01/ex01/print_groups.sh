#!/bin/bash
id -Gn $FT_USER | tr " " "," | tr --delete "\r\n"
