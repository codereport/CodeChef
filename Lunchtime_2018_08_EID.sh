# code_report Solution
# https://youtu.be/DV7_ZNyMjW0

read t

for i in $(seq 1 $t)
do
    read n
    read line
    a=($(echo $line | tr ' ' '\n' | sort))
    
    (( min = a[1] - a[0] ))

    for (( i = 2; i < $n; i++ )) 
    do 
        (( diff = ${a[i]} - ${a[i-1]} ))
        if [ $diff -lt $min ]; then 
            min=$diff
        fi
    done
    echo "$min"
done
