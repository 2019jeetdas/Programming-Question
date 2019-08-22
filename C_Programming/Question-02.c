/*---- Question-[02] : Program for printing ASCII value (without inbuild function) -----*/

#include<stdio.h>

int main()
  {
    printf("\n-------: Print ASCII value :---------\n\n");
    int j = 1; 
    for(int i=32;i<127;i++)
     {
       printf("[%d]---- %c -- > %d \n",j,i,i);
       j++;
     }
    printf("\n-------------------------------------\n\n");
    return 0;
  }

/*------------ [ OUTPUT ]-----------

jeet@jeet-HP-Notebook:~/Desktop/C_Program$ gcc Question-[B].c
jeet@jeet-HP-Notebook:~/Desktop/C_Program$ ./a.out

-------: Print ASCII value :---------

[1]----   -- > 32 
[2]---- ! -- > 33 
[3]---- " -- > 34 
[4]---- # -- > 35 
[5]---- $ -- > 36 
[6]---- % -- > 37 
[7]---- & -- > 38 
[8]---- ' -- > 39 
[9]---- ( -- > 40 
[10]---- ) -- > 41 
[11]---- * -- > 42 
[12]---- + -- > 43 
[13]---- , -- > 44 
[14]---- - -- > 45 
[15]---- . -- > 46 
[16]---- / -- > 47 
[17]---- 0 -- > 48 
[18]---- 1 -- > 49 
[19]---- 2 -- > 50 
[20]---- 3 -- > 51 
[21]---- 4 -- > 52 
[22]---- 5 -- > 53 
[23]---- 6 -- > 54 
[24]---- 7 -- > 55 
[25]---- 8 -- > 56 
[26]---- 9 -- > 57 
[27]---- : -- > 58 
[28]---- ; -- > 59 
[29]---- < -- > 60 
[30]---- = -- > 61 
[31]---- > -- > 62 
[32]---- ? -- > 63 
[33]---- @ -- > 64 
[34]---- A -- > 65 
[35]---- B -- > 66 
[36]---- C -- > 67 
[37]---- D -- > 68 
[38]---- E -- > 69 
[39]---- F -- > 70 
[40]---- G -- > 71 
[41]---- H -- > 72 
[42]---- I -- > 73 
[43]---- J -- > 74 
[44]---- K -- > 75 
[45]---- L -- > 76 
[46]---- M -- > 77 
[47]---- N -- > 78 
[48]---- O -- > 79 
[49]---- P -- > 80 
[50]---- Q -- > 81 
[51]---- R -- > 82 
[52]---- S -- > 83 
[53]---- T -- > 84 
[54]---- U -- > 85 
[55]---- V -- > 86 
[56]---- W -- > 87 
[57]---- X -- > 88 
[58]---- Y -- > 89 
[59]---- Z -- > 90 
[60]---- [ -- > 91 
[61]---- \ -- > 92 
[62]---- ] -- > 93 
[63]---- ^ -- > 94 
[64]---- _ -- > 95 
[65]---- ` -- > 96 
[66]---- a -- > 97 
[67]---- b -- > 98 
[68]---- c -- > 99 
[69]---- d -- > 100 
[70]---- e -- > 101 
[71]---- f -- > 102 
[72]---- g -- > 103 
[73]---- h -- > 104 
[74]---- i -- > 105 
[75]---- j -- > 106 
[76]---- k -- > 107 
[77]---- l -- > 108 
[78]---- m -- > 109 
[79]---- n -- > 110 
[80]---- o -- > 111 
[81]---- p -- > 112 
[82]---- q -- > 113 
[83]---- r -- > 114 
[84]---- s -- > 115 
[85]---- t -- > 116 
[86]---- u -- > 117 
[87]---- v -- > 118 
[88]---- w -- > 119 
[89]---- x -- > 120 
[90]---- y -- > 121 
[91]---- z -- > 122 
[92]---- { -- > 123 
[93]---- | -- > 124 
[94]---- } -- > 125 
[95]---- ~ -- > 126 

-------------------------------------

jeet@jeet-HP-Notebook:~/Desktop/C_Program$ 
 
--------------------------------------------------*/
