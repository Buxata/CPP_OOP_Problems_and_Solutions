# CPP OOP Problems and Solutions
This is a repository that I can shre different C++ problems and solutions.

I will attempt to keep the code in an orgnized manner. Please do not hesitate to get in touch if you need any elaboration on the solutions I have presented here.

Objects and Classes - Exercise

# Objects and Classes - Exercise

Write C++ code for solving the tasks on the following pages.

Code should compile under the C++03 or the C++11 standard.

Please submit a single **.cpp** file for each task.

**.cpp** files for the tasks should be named with the task number followed by what you feel describes the exercise in a few words.

E.g. a good name for task 2 of this homework would be:
**2.distance.cpp**

Don&#39;t worry about the name too much, just make sure the number and the file extension are correct.

Tasks 4 in this homework requires you to be creative about the implementation. It simulates real-world examples of non-strict and sometimes vague descriptions of client requirements. Part of the exercise is to learn to convert paragraphs of text into classes which solve the needs described in the paragraphs, and writing code which is easily modified if, for example, the format of the input/output data changes slightly. Also note that some of these exercises mention e.g. &quot;array&quot; or &quot;string&quot; and so on – do not take these literally, you can use any data structures you find appropriate.

1.
# Homework

1.
# Sentence Shifter

You are given a **list of words** in one line. On the other line you are given a **simple integer**.

Your role is to **shift the words** in the sentence **according to that integer**.

For example if a sentence has 10 words and you receive a shift number 2 - the first word should become the third, the second word should become the fourth and so on, ..., the word before the last should become the first and the last word should become the second.

Implement this task with a class that is initialized with a **linear container** (array, vector, etc.) of words and which has a **getShiftedSentence()** method which returns the words shifted.

Each word is printed on a different line.

### Examples

| **Input** | **Output** |
| --- | --- |
| Welcome to SoftUni and have fun learning programming2 | learningprogrammingWelcometoSoftUniandhavefun |

1.
# Distance

Write a program to calculate the (Euclidean) distance between two points **p**** 1 **{** x ****1** , **y**** 1 **} and** p ****2** { **x**** 2 **,** y ****2** }. You should write a class to represent such points and a method in it which calculates the distance from the point to another point.

### Examples

| **Input** | **Output** |
| --- | --- |
| 3 46 8 | 5.000 |
| 3 45 4 | 2.000 |
| 8 -2-1 5 | 11.402 |

1.
# Sales

Write a class **Sale** holding the following data: **town** , **product** , **price** , **quantity**. Read a **list of sales** and calculate and print the **total sales by town** as shown in the output. Order the towns **alphabetically** in the output.

### Examples

| **Input** | **Output** | **Comments** |
| --- | --- | --- |
| 5Sofia beer 1.20 160Varna chocolate 2.35 86Sofia coffee 0.40 853Varna apple 0.86 75.44Plovdiv beer 1.10 88 | Plovdiv -\&gt; 96.80Sofia -\&gt; 533.20Varna -\&gt; 266.98 | Plovdiv -\&gt; 1.10 \* 88 = 96.80Sofia -\&gt; 1.20 \* 160 + 0.40 \* 853 = 533.20Varna -\&gt; 2.35 \* 86 + 0.86 \* 75.44 = 266.98 |

1.
# Total average of students

Write a program, use a class that has params:

- Student Name
- Student Surname
- Total Average

The class should have **print** method that for a given object prints all the information.
 Create a vector in **main()** that for a given number (passed thru user) saves the objects
 Make a function that calculates the Total **average** of **all** students.
 If there are no students, print &quot; **Invalid input**&quot;.

**Explanation:**

Number of students – 2

Name – Maria

Surname – Ivanova

Average – 3.5

Name – Dragan

Surname – Ivanov

Average – 4.5

**TOTAL AVERAGE** – (3.5 + 4.5) / 2 = 4

### Examples

| **Input** | **Output** |
| --- | --- |
| 2MariaIvanova3.5DraganIvanov4.5 | Maria Ivanova 3.5Dragan Ivanov 4.54 |

1.
# Memory\* (not included in the homework)

You are given program in an **MemoryMain.cpp** , as well as a **Company.h** file, that read information about **companies** and writes it to the console.

Each company has:

- An **id** (an integer between **0** and **255** )
- A **name** (a **string** containing a sequence of lowercase English letters **a-z** )
- **Employees** by their initials (a **vector** of **pair** s of characters, containing at most **255** employee initials)

The MemoryMain.cpp file reads the information from the console, as a sequence of byte values, stores those bytes in memory (RAM), and then calls a function named **readCompaniesFromMemory** , passing it two parameters:

- a **pointer** to the **first byte** in the memory containing the companies
- an integer indicating the **number of companies** stored in the memory

The memory format of each company is the following:

- the first byte contains the **id** of the company ( **0-255** )
- the **name** of the company starts from the second byte and ends with a null terminator (the value **0** , or **&#39;\0&#39;** ), i.e. the name of the company is placed in memory the same way a null-terminated C-String would be
- the next byte contains the number of employees the company has ( **0-255** ). Let&#39;s call it **numEmployees**
- the following **numEmployees \* 2** bytes contain pairs of initials of the employees, i.e. if the **numEmployees** byte is at address **x** , then the **first employee&#39;s first initial** is at address **x + 1** , their **second initial** is at address **x + 2** , the **second employee&#39;s first initial** is at address **x + 3** and their **second** is at address **x + 4** and so on.

The **MemoryMain.cpp** file will print the companies in the format:

- company **id** , space, company **name** , space, opening bracket **&#39;(&#39;**, first initial of first employee, dot **&#39;.&#39;** , second initial of first employee, dot **&#39;.&#39;** , first initial of second employee, … , closing bracket **&#39;)&#39;**

For example, if we have the companies:

- **id = 42, name = &quot;uni&quot;, employees = { {&#39;I&#39;, &#39;K&#39;}, {&#39;S&#39;, &#39;N&#39;} }** and
**id = 13, name = &quot;joro&quot;, employees = { {&#39;G&#39;, &#39;G&#39; } }**

Their representation as **string** s printed by **MemoryMain.cpp** will be:

**42 uni (I.K.,S.N.)
 13 joro (G.G.)**

Their representation in memory, assuming the memory starts at byte address **M**** ,** will be:

| **Offset from start** | **0** | **+1** | **+2** | **+3** | **+4** | **+5** | **+6** | **+7** | **+8** | **+9** | **+10** | **+11** | **+12** | **+13** |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| **Value** | **42** | **&#39;u&#39;** | **&#39;n&#39;** | **&#39;i&#39;** | **&#39;\0&#39;** | **2** | **&#39;I&#39;** | **&#39;K&#39;** | **&#39;S&#39;** | **&#39;N&#39;** | **13** | **&#39;j&#39;** | **&#39;o&#39;** | **&#39;r&#39;** |

| **Offset from start** | **+14** | **+15** | **+16** | **+17** | **+18** |
| --- | --- | --- | --- | --- | --- |
| **Value** | **&#39;o&#39;** | **&#39;\0&#39;** | **1** | **&#39;G&#39;** | **&#39;G&#39;** |

And their representation in the input for the task will be:

**42 117 110 105 0 2 73 75 83 78**

**13 106 111 114 111 0 1 71 71**

**end**

Your task is to create a file called **CompanyMemoryUtils.h** (which **MemoryMain.cpp** includes), containing the function **readCompaniesFromMemory** , implemented in such a way that MemoryMain.cpp compiles successfully and works as described above – i.e. your task is to read the memory, which will be in the format described above, and return a **vector\&lt;Company\&gt;** containing the companies that were written in that memory.

You should submit a single **.zip** file for this task, containing ONLY the **CompanyMemoryUtils****.h **file. The Judge system has a copy of the other files and will compile them along with your** CompanyMemoryUtils ****.h** file in the same directory.

NOTE: you are also given the code for the test generator used to generate the tests in the judge system, in C#. Compiling and running it will produce random tests ( **.in.txt** input files and **.out.txt** output files) similar to those in the Judge system, which you can use to test your code locally.

### Examples

| **Input** | **Output** |
| --- | --- |
| 42 117 110 105 0 2 73 75 83 78 13 106 111 114 111 0 1 71 71end | 42 uni (I.K.,S.N.)13 joro (G.G.) |
| 188 105 99 121 104 97 0 3 66 81 72 80 70 8358 117 97 100 101 108 0 3 83 65 67 72 76 84end | 188 icyha (B.Q.,H.P.,F.S.)58 uadel (S.A.,C.H.,L.T.) |

1.
# Excluded from Homework

1.
# Astronomical Objects\*\*(not included in the homework)

You are tasked with creating a console application which will store and display information about astronomical objects. Each object has a name of a home solar system, a position in the system, a mass in kg, a radius in meters, and a type (star, rocky planet, gas giant, unknown) and a nickname. Only some astronomical objects have a nickname. The name of the home solar system of an object can change (the solar system could be renamed), and the type can ONLY change from unknown to star, rocky planet, or gas giant. Objects of type star always have their position in the system set to 1. The designation of an astronomical object has the format:

**home solar system – position in the system (nickname)**

Where (nickname) is omitted if the object has no nickname. E.g. the sun of the Cancri system will have a designation **Cancri-1** , while the 8th planet named &quot;Steel World&quot; will have a designation of **Cancri-9 (Steel World)**.

Write a program, which allows the user to create info about astronomical objects as well as search for all planets of a star system (by typing the name of the system) or of a specific object of a system (by typing the name and position of the object). When displaying info about objects the user searched for, use the following format:

**designation { mass:** _ **mass in kg** _ **, radius:** _ **radius in meters** _ **}**

For example, if Steel World had a mass of 5.972e+24 kg and a radius of 6 137 000 meters, displaying it to the user would look like:
**Cancri-9 (Steel World) {mass: 5.972e+24, radius: 6137000}** (note: don&#39;t worry about the exact format of the numbers, just show the numbers however **cout** decides to print them).

Creating objects is up to you – just make sure a user can add the info of any type of astronomical object.

The program should store the info in a text file (each time an object is created) and should load the info each time it starts (so that users can look-up objects they created previously).

Make sure you create the proper classes, constructors, access modifiers and methods for the above task. You should submit your program in a single **.cpp** file, but also add a file which contains input which can be copy-pasted into the console to demonstrate creating astronomical objects and searching for astronomical objects.

1.
# Splender\*\* (not included in the homework)

Splender is a depressed robot who heals his depression by partying and drinking alcohol. To save him from a life of debauchery, his creators have reprogrammed the control system with a more rudimentary intelligence. Unfortunately, he has lost his sense of humor and his former friends have now rejected him.

Splender is now all alone and is wandering through the streets of Futurama with the intention of ending it all in a suicide booth.

To intercept him and save him from almost certain death, the authorities have given you a mission: write a program that will make it possible to foresee the path that Splender follows. To do so, you are given the logic for the new intelligence with which Splender has been programmed as well as a map of the city.

**Rules**

The 9 rules of the new Splender system:

1) Splender starts from the place indicated by the **@** symbol on the map and heads SOUTH.

2) Splender finishes his journey and dies when he reaches the suicide booth marked $.

3) Obstacles that Splender may encounter are represented by **#** or **X**.

4) When Splender encounters an obstacle, he changes direction using the following priorities: **SOUTH** , **EAST** , **NORTH** and **WEST**. So he first tries to go **SOUTH** , if he cannot, then he will go EAST, if he still cannot, then he will go **NORTH** , and finally if he still cannot, then he will go **WEST**.

5) Along the way, Splender may come across path modifiers that will instantaneously make him change direction. The **S** modifier will make him turn **SOUTH** from then on, **E** , to the **EAST** , **N** to the **NORTH** and **W** to the **WEST**.

6) The circuit inverters ( **I** on map) produce a magnetic field which will reverse the direction priorities that Splender should choose when encountering an obstacle. Priorities will become **WEST** , **NORTH** , **EAST** , **SOUTH**. If Splender returns to an inverter I, then priorities are reset to their original state ( **SOUTH** , **EAST** , **NORTH** , **WEST** ).

7) Splender can also find a few beers along his path ( **B** on the map) that will give him strength and put him in &quot;Breaker&quot; mode. Breaker mode allows Splender to destroy and automatically pass through the obstacles represented by the character **X** (only the obstacles **X** ). When an obstacle is destroyed, it remains so permanently and Splender maintains his course of direction. If Splender is in Breaker mode and passes over a beer again, then he immediately goes out of Breaker mode. The beers remain in place after Splender has passed.

8) 2 teleporters **T** may be present in the city. If Splender passes over a teleporter, then he is automatically teleported to the position of the other teleporter and he retains his direction and Breaker mode properties.

9) Finally, the space characters are blank areas on the map (no special behavior other than those specified above).

Your program must display the sequence of moves taken by Splender according to the map provided as input.

The map is divided into lines ( **L** ) and columns ( **C** ). The contours of the map are always unbreakable **#** obstacles. The map always has a starting point **@** and a suicide booth **$**.

Let the map below:

| #######@E $## N ##X ####### |
| --- |

In this example, Splender will follow this sequence of moves:

**SOUTH** (initial direction)

**EAST** (because of the obstacle **X** )

**NORTH** (change of direction caused by **N** )

**EAST** (change of direction caused by **E** )

**EAST** (current direction, until end point **$** )

### Examples

| **Input**                                                                                                                     | **Output**                                                                                                                       |
| ----------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------- |
| 10 10

##########

#        #

#  S   W #

#        #

#  $     #

#        #

#@       #

#        #

#E     N #

########## | SOUTH

SOUTH

EAST

EAST

EAST

EAST

EAST

EAST

NORTH

NORTH

NORTH

NORTH

NORTH

NORTH

WEST

WEST

WEST

WEST

SOUTH

SOUTH |
| 5 5

#####

#@  #

#   #

#  $#

#####                                                                                        | SOUTH

SOUTH

EAST

EAST                                                                                                         |
| 8 8

########

\# @    #

#     X#

\# XXX  #

#   XX #

#   XX #

#     $#

########                                         | SOUTH

EAST

EAST

EAST

SOUTH

EAST

SOUTH

SOUTH

SOUTH                                                                        |





