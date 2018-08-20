# code_report Solution
# https://youtu.be/Enbht_Uf1CE

read t

for i in $(seq 1 $t)
do
    read n
    while :
    do 
        (( n++ ))
        x=$n
        x=$(echo $x | tr -cd '3' | wc -c)
        if [ $x -gt 2 ] ; then break ; fi
    done 
    echo $n
done
