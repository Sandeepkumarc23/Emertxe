#!/bim/bash
read -p "Enter the number of times to print the Hello World: " n
for i in `seq $n`
do
	echo Hello World
done
