# Notes: COA by gothi sir

Start date: 3/7/23

Architecture: means jab hum computer design krte hain toh sab define krte hain, like cpu, memory, io devices etc like intel is having **8085 microprocessor**

Organization: mean implementation those device together mtlb how they all will communicate with each other

ex: like hum kaise memory access ka performance improve kr stke n all - using **cache memory**

cpu aur memory kaise communication krenge aaps mein, 

ye dono organizational decisions hain

**Data format** - computer mein har chiz **binary number** mien story hoti h

like: number aur characters

2 type ke number hote hain phela f**ixed point representation** aur second **floating point representation** 

fir **fixed point number** bhi do thrah ke hote hain signed number aur unsigned number

**signed** number like : 5 = 101, 6 = 101, 9 = 1001

**unsigned** number like : 1’s complement, 2’s complement, signed magnituted

chars bhi binary mein store hote hai but not directly isske alg representation hai jaise ki **ASCII** format aur **EBCDIC**

**EBCDIC**: Extended binary code decimal interchange code isme chars ka bhi support hota h

### Course Structure

1. Basic
2. Instruction
3. CPU design
4. I/O Organization
5. Memory Org
6. Performance
7. Data format

**Remember Time reduction is continual phenomena.**

Phele **punch card computers** hote the hum punch card par apna program likhte the aur computer mien insert krte the aur sath hei dusre punch card par input likhte the par dikkat ye aayi ki agr program mein errors hain toh dubra naye punch card pr likhna padta tha ye issue **von Neumann** ne solve kri jisko hum **princeton architecture** bhi bolte hain ya **stored memory architecture** 

ye architecture itna acha tha ki aaj tak ye use ho rha, iss mein ek dedicated memory attach kr di thi jo program, instruction, data ko store krta tha aur hum isko update kr skte hain

but isme bhi ek bottleneck tha ki instruction aur data ko ek sath fetch nai kr skte the ye issue solve hui **harvard architecture** mien jisme do memory laga di ek instruction ke liye dusra data ke liye pr ye utna practically use nai hua lekin ye cache memory mein use hota h

**cachce memory** mien do level hote h 
lvl 1 pr i-cache (instruction store krta h) aur d-cache (data ko store krta h)

lvl 2 pr unified cache (ye dono chize store krta h)