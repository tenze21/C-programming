# C Programming.

## 00. Overview.
It's been over a year now since I got into computer science and this field never fails to facinate me with the sheer amount of stuff that is out there to learn. By now I have tried my hands on Javascript, GO and Python. While coding with these languages somethings been always bothering me like how I never properly understood how those programming languages did their stuff like I learned that you can assign variables simply like this `let num=3;`(JS code) but I never understood what I was really doing "where was it actually storing the integer 3?". Hence I have decided to try out a lower level language and C seemed like the best choice to understand the workings of higher level languages since they were also build upon lower level languages. 

## 01. A brief history of C.
To understand why we needed a language like C or any other programming language in general, we need to dive back in time when the field of computer science was wholely hardware centered. At that time computer programs were written in what is called the assembly language which is just a layer above the machine code. The problem with assembly languages was that it was hardware specific which means if you write a program on a computer that program would not work in another computer unless the other computer had the same CPU architechure, operating system, memory layout and peripheral configuration. which means if you wanted to run the same program on a different computer you had it write everything from scratch for that computer. 

In 1969-70 ken Thomson wrote the B language which stemed from or was primarily influenced by the BCPL(Basic Combined Programming Language) language and later C also took it's inspirations from the BCPL and the B language. It is also stated in the book as "Many of the most important ideas of C stem from the considerably older, but still quite vital, language BCPL, developed by Martin Richards. The influence of BCPL on C proceeded indirectly through the language B, which was written by Ken Thompson in 1970 for the first UNIX system on the [PDP-7](#appendix)". 

The languages that existed before C like in the 1950s and 1960s were all meant for a specific field like FORTRAN(formula translation) developed in 1950 was designed for scientific and engineering computations and COBOL(Common Business Oriented Language) was designed for business, finance and administrative systems and many others; ALGOL, LISP and PL/I all had a specific purpose and worked on a higher [level of abstraction](#appendix) which meant they didn't have access to the computer's hardware. With the ever growing need for a flexible and powerful system programming language Dennis M. Ritchie created the C programming language in the early 1970s and later he and Brian W. Kernighan rewrote the UNIX operating system in C and all of the application software of UNIX was also written in C which made UNIX and it's application softwares portable across different computers as long as it had a C [compiler](#appendix). This set off the stage for the development of all the portable application softwares that we use on our devices these days without having to worry about whether you are using an IOS, android or a windows machine.
<div style="display:flex;">
    <figure>
    <img src="/images/ken-thompson.jpg"
         alt="Ken Thomson" style="width:200px; height:200px;">
    <figcaption>Ken Thomson.</figcaption>
</figure>
<figure>
    <img src="/images/martin_richards.jpeg"
         alt="Martin Richards" style="width:200px; height:200px;">
    <figcaption>Martin Richards.</figcaption>
</figure>
<figure>
    <img src="/images/Dennis-Ritchie.jpg"
         alt="Dennis Ritchie" style="width:200px; height:200px;">
    <figcaption>Dennis M. Retchie.</figcaption>
</figure>
<figure>
    <img src="/images/brian_kernighan.jpg"
         alt="Brian W. kernighan" style="width:200px; height:200px;">
    <figcaption>Brian W. kernighan.</figcaption>
</figure>
<figure>
    <img src="/images/pdp-7.jpg"
         alt="PDP-7" style="width:200px; height:200px;">
    <figcaption>The PDP-7.</figcaption>
</figure>
</div>

## 02. A Brief Introduction to C.

## Appendix.
 - **PDP-7**: The PDP-7 was an 18 bit minicomputer produced by Digital Equipment Corporation as a part of the PDP series.

 - **Level of Abstraction**: The understanding of the workings of a computer can generally be broken down into several layers of abstraction like at the lowest level we have the hardware components like the CPU, memory, and input/output devices(monitor, keyboard, mouse) and somewhere in the middle lies the programming languages level where developers write code in human understanble language also known as high level language and on the top of everything we have the application layer where all the apps and web applications we use in our daily lives fall.

 - **Compiler**: A compiler is a program that converts source code into machine understandable code. All the high level languages like python have a compiler which converts the code into machine understandable code so that the computer can successfully execute the code. 

