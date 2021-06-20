/*Добавете към масива студенти масив с номера отговарящи на
курса в който е студента. Използвайте същия фор цикъл за да
добавите към името на студента неговия нурс в масива */

#!/bin/bash
students=(Micho Pesho 'Jenifer Lopes' "Doctor Kostov")
course=(1 2 3 4 2 3)
for ((i=0;i<${#students[@]};i++));
do
    c+=(${students[i]}${course[i]});
done

for i in ${c[@]}
do
    echo $i
done
