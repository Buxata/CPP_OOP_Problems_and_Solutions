# Objects and Classes
Objects and Classes - Lab

# Objects and Classes - Lab

Write C++ code for solving the tasks on the following pages.

Please try to solve the problems using **classes and objects**.

Keep in mind that the type of submission if **file upload**.

1.
## Letters

You are given a text in English. Let&#39;s define a word as any sequence of alphabetical characters. Each of those characters we will call a letter, but we will consider the uppercase and lowercase variant of a character in a word as the **same** letter.

Write a program which reads the text (a single line on the console) and then reads lines, each containing a single letter, until a line containing a **&#39;.&#39;** (dot) is entered. For each of those lines, print all words that contain the letter, ordered alphabetically (capitals letters before lowercase letters), without duplicates – if no words contain that letter, print **&quot;---&quot;** (three dashes)

### Examples

| **Input (NOTE: the** _ **italic** _ **text is on a single line)** |
| --- |
| _You are given a text in English. Let&#39;s define a word as any sequence of alphabetical characters. Each of those characters we&#39;ll call a letter, but we will consider the uppercase and lowercase variant of a character in a word as the_ _ **same** _ _letter._aYh. |

| **Output** |
| --- |
| Each a alphabetical and any are as call character characters lowercase same uppercase variantYou anyEach English alphabetical character characters the those |

1.
## Rust

You are given a 10x10 matrix representing a metal square, which has begun to rust. There are 3 types of symbols in the matrix – a **.** (dot) means a healthy part of the metal, a **#** indicates a rust-resistant part, and a **!** indicates a part that has begun to rust.

There may be **0, 1 or more** parts that have begun to rust.

The rust spreads from a rusty cell to healthy cells by &quot;infecting&quot; adjacent cells directly above, to the right, below and to the left of itself **(no diagonals)**, at the same time. The rust cannot infect cells that are indicated as **rust resistant**. Let&#39;s define the time it takes for all cells adjacent to a rusty cell to get infected as 1 unit.

After reading the matrix, read a single integer – the elapsed time in units (as defined above) – and print a matrix representing how the metal square will look after the rust has been acting on it for that amount of time.

### Examples

| **Input** | **Output** |
 | **Input** | **Output** |
 | **Input** | **Output** |
| --- | --- | --- | --- | --- | --- | --- | --- |
| ..............!.....................................................................................4 | .!!!!!!!..!!!!!!!!!..!!!!!!!....!!!!!......!!!........!.............................................
 |
 | ..............!........###..........................................................................5 | !!!!!!!!!.!!!!!!!!!!!!!###!!!..!!!.!!!....!...!.....................................................
 |
 | !........!................................................................................!........!5 | !!!!!!!!!!!!!!!!!!!!!!!!..!!!!!!!....!!!!!......!!!!......!!!!!....!!!!!!!..!!!!!!!!!!!!!!!!!!!!!!!!5 |

1.
## Matching Locations

Write a program that reads **names** of places and their geographical **coordinates** in the format **name,latitude,longitude** (where latitude and longitude are floating-point numbers). No two locations will have the same **name**. Some locations may have the same **coordinates**.

After all locations are entered, a single line containing the **&#39;.&#39;** (dot) character will be entered.

After that, queries will be entered – the queries will either contain a **name** of a location, or **latitude** and **longitude** coordinates (entered as two floating point numbers separated by a single space). Print all locations that match the query in the same format that they were entered.

After all queries are entered, a single line containing the **&#39;.&#39;** (dot) character will be entered.

### Examples

| **Input** | **Output** |
| --- | --- |
| Sofia,42.70,23.33New York,40.6976701,-74.2598732SoftUni,42.70,23.33.Sofia40.6976701 -74.259873242.70 23.33. | Sofia,42.70,23.33New York,40.6976701,-74.2598732Sofia,42.70,23.33SoftUni,42.70,23.33
 |

![](RackMultipart20210802-4-y0cyur_html_63c6245aa4940ad8.gif) ![](RackMultipart20210802-4-y0cyur_html_5f0f2ddacbac70d2.gif) ![](RackMultipart20210802-4-y0cyur_html_51bd00be29b85496.gif) ![](RackMultipart20210802-4-y0cyur_html_f746d52952cd7e91.gif)[![](RackMultipart20210802-4-y0cyur_html_3aa486326bfa75e9.png)](https://softuni.org/)

Follow SoftUni:

© SoftUni – [about.softuni.bg](https://about.softuni.bg/). Copyrighted document. Unauthorized copy, reproduction or use is not permitted.

[![](RackMultipart20210802-4-y0cyur_html_9b17934bfedeb713.png)](https://softuni.org/)[![](RackMultipart20210802-4-y0cyur_html_c9db196993f48ff8.png)](https://softuni.bg/)[![Software University @ Facebook](RackMultipart20210802-4-y0cyur_html_94be3df36d913358.png)](https://www.facebook.com/softuni.org)[![](RackMultipart20210802-4-y0cyur_html_7e8e605369b4ad74.png)](https://www.instagram.com/softuni_org)[![Software University @ Twitter](RackMultipart20210802-4-y0cyur_html_ff9c629b0a21eb6b.png)](https://twitter.com/SoftUni1)[![Software University @ YouTube](RackMultipart20210802-4-y0cyur_html_7db86a748da0e575.png)](https://www.youtube.com/channel/UCqvOk8tYzfRS-eDy4vs3UyA)[![](RackMultipart20210802-4-y0cyur_html_95554caa563bbdb3.png)](https://www.linkedin.com/company/softuni/)[![](RackMultipart20210802-4-y0cyur_html_4df51bfadcab813.png)](https://github.com/SoftUni)[![Software University: Email Us](RackMultipart20210802-4-y0cyur_html_d7fa82ab7332f3fa.png)](mailto:info@softuni.org)

Page 2 of 2