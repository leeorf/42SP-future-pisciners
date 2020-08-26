#!/bin/bash

stringCount=$(echo $FT_LINE)

if [ "$stringCount" ]; then
	echo -n $FT_LINE | wc -m
fi
