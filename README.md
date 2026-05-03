# AML055-FHD-056A

i make a pocket lcd following this repo https://github.com/peng-zhihui/PocketLCD 
but when order lcd from taobao the driver chip replace to ILI7807D ( fimware for chip NT35532)
so that try to search in internet and find that Toshiba chip solution and just order from https://hackaday.io/project/168212-mipi-hdmi-bridge-re
then Now i try to make a code for running lcd ( ILI7807d) with TC3580 board.
If you have knowlede please make a comment, i will try my best/


lcd specification:
![image](images\lcd_specification.png)

pinout_pengzihui Board:
![image](images\pinout_pengzihui Board.png)

TC3580_board:
![image](images\TC3580_board.png)

##pinout:
now follow penzihui driver board, and now try to display lcd by TC3580:

### TC3580 -- Pengzihui driver boad
Power pinout
pin 5,6 (V1)  -- 34,33  
pin 8,9,10(3V Black light E8 control) -- 32,31 
pin 28 (3.3V) -- 38

Mipi pinout
31 OD0+ -- 29
32 OD0- -- 28

34 OD1+ --  26
35 OD1-  -- 25

37 0CLK+ -- 23
38 0CLK-  -- 22

40 0D2+ -- 20
41 0D2-  -- 19

43 0D3+ -- 17
44 0D3- -- 16
