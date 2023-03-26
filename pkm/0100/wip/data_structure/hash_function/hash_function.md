# Hash Function

## Theory
- To overcome the space issue in [Direct Adderess Table](), instead of storing the element in the index same as the key, a **Hash Function** is applied on the key.
- The hash function returns a value between **(**$0$,**size of Hash Table****)** and the element is stored in that index in **Hash Table (HT)**.
- Hence the space issue is solved, because, it doesn't matter what is the value of the key, after applying the **Hash Function**, the output is ensured to be withn the pre-defined range.
- Applying the **Hash Function** will not affect the time complexity so the time complexity remains $O(1)$.

## Diagram
<div class="mxgraph" style="max-width:100%;border:1px solid transparent;margin:auto;"
    data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;toolbar&quot;:&quot;zoom layers tags lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; modified=\&quot;2023-03-19T12:46:17.091Z\&quot; agent=\&quot;5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/111.0.0.0 Safari/537.36\&quot; etag=\&quot;iQLoYgMJfAG9PD6l_Ezj\&quot; version=\&quot;21.0.6\&quot; type=\&quot;google\&quot;&gt;&lt;diagram name=\&quot;Page-1\&quot; id=\&quot;bxFyXsgCklLcgzZhW7Ri\&quot;&gt;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&lt;/diagram&gt;&lt;/mxfile&gt;&quot;}">
</div>

In the above example, the hash function used is **MOD**  $10$. <br/>
So if **Key** = $33$ then result of hash function is **Key** $ \% \ 10$ which is $33 \ \% \ 10$ = $3$. <br/>
So the element of Key $33$ will be stored in the $3^{rd}$ index of the Hash Table. <br/>

## Drawback
- Issue occurs when the **Hash Functions** gives the same result for $2$ different keys.
- Say we have $2$ Keys $33$ and $333$. The applying the hash function **MOD** $10$ on both the keys the result will be same for both, i.e. $3$.
- But we can not place $2$ keys in $1$ index. This is called **Collision**.
- **Collision** is the major drawback of this method.
- We might think of different **Hash Functions** to make sure that **Collision** does not happen. But no matter how good **Hash Functions** we choose, there will always be a chance of **Collision**.
- So we need to choose a **Hash Functions** which gives less amount of **Collision**.
- *It is like choosing a minister who does less corruption.*

## Types of Hash Function
- **Division Modulo Method**
- **Digit Extraction Method**
- **Folding Method**
    - **Fold Boundry**
    - **Fold Shifting**
- **Mid Square Method**

### Division Modulo Method
**HF(Key)** = **Key** $\%$  **M**

#### Example in Decimal Number System
- **For Examples** <br>
    **Key** = $1234321$ & **M** = $1000$ $\implies$ **HF(Key)** = $1234321 \ \% \ 1000$ = $321$ <br>
    **Key** = $5432321$ & **M** = $1000$ $\implies$ **HF(Key)** = $5432321 \ \% \ 1000$ = $321$ <br>
    **Key** = $5333432321$ & **M** = $1000$ $\implies$ **HF(Key)** = $5333432321 \ \% \ 1000$ = $321$ <br>
- In this method, no matter what the key value is, if the last $3$ digits are same, then everytime, there will be collision.

#### Example in Binary Number System
- If we choose the **M** value exactly a power of $2$, then we can see the above issue in binary as well.
- **For Examples** <br>
    **Key** = $10101101101$ & **M** = $1000$ $\implies$ **HF(Key)** = $10101101101 \ \% \ 1000$ = $101$ <br>
    **Key** = $111111111101$ & **M** = $1000$ $\implies$ **HF(Key)** = $111111111101 \ \% \ 1000$ = $101$ <br>
    **Key** = $1111110011001101$ & **M** = $1000$ $\implies$ **HF(Key)** = $1111110011001101 \ \% \ 1000$ = $101$

#### Keynotes
- This method does not take all digits into consideration.
- It is recommended that, in this method, we will get some improvement if we take **M** value as a prime number.
- And the prime number should not be close to any number which is a power of $2$.
- For example, rather than taking **M** value as $61$ or $511$ or $7$ or $1023$, the better choice would be $661$.

### Digit Extraction Method
**HF(Key)** = **ExtractAndConcatenate**($3^{rd},6^{th},9^{th}$) **digit of M** , **if M** = $1000$ <br>
**Note :** In this method, it is not mandatory that we need to extract only $3$ digits from $3^{rd},6^{th},9^{th}$ place of the key. Number of digits can vary as well as the position from which we need to extract might also differ.
- **For example** <br>
    **Key** = $123456789$ & **M** = $1000$ $\implies$  **HF(Key)** = $123456789$ = $369$ <br>
    **Key** = $823716459$ & **M** = $1000$ $\implies$  **HF(Key)** = $823716459$ = $369$ <br>
    **Key** = $53334623914566$ & **M** = $1000$ $\implies$  **HF(Key)** = $53334623914566$ = $369$ <br>
- However, this is one of the worst method among all. In this, we can give the counter example very easily just by fixing the bits at certain position.
- This method also does not take all digits into consideration.

### Folding Method
There are 2 types of this method, **Fold Shifting Method** and **Fold Boundary Method**. <br/>
**Note :** The working of the method might differ, depending upon the requirement. In below, we just take an example to show a general working. <br/>

#### Fold Shifting Method
In below Example, **Key** = $456789123$ and **M** = $1000$ <br/>
The process is exactly same as shown below in the diagram <br/><br/>
<div class="mxgraph" style="max-width:100%;border:1px solid transparent;margin:auto;"
    data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;toolbar&quot;:&quot;zoom layers tags lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; modified=\&quot;2023-03-20T12:44:22.600Z\&quot; agent=\&quot;5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/111.0.0.0 Safari/537.36\&quot; etag=\&quot;2CNXfxsdmlBO-21Jttd9\&quot; version=\&quot;21.0.8\&quot; type=\&quot;google\&quot;&gt;&lt;diagram name=\&quot;Page-1\&quot; id=\&quot;Ff_9cPo2TSigcMYJ5j0y\&quot;&gt;5VhLj9owEP41ObZy3uG4wLYctlVVpD72Uhl7SKw6MXIMBH59nY1DErIUqOgixImZL+MZe76xx8ZyR2nxUeJF8klQ4JaDaGG5Y8txbISQ/imRTYX4UVgBsWTUGDXAlG2hHmnQJaOQdwyVEFyxRRckIsuAqA6GpRTrrtlc8G7UBY6hB0wJ5n30O6MqqdDIRw0+ARYndWS7XnCKa2MD5AmmYt2C3EfLHUkhVCWlxQh4mbw6L9W4Dwe+7iYmIVOnDIBvD0A+Tya/np+i+OvWI8XT9p1TeVlhvjQLNpNVmzoDkNGHMpFay0SmwWGiUq41W4tSLDMKZQSktWos0F5Kmznau5XrkgGRgpIbbbJuclunNmmltcYkcKzYquseG4rjnbtdhC+C6cAOMuXo1lyYYrQD1HWRi6UkYEa1c7nnyPGOOFJYxqB6jrTQWnYDvVB1Bm3eK7QFXCdrONNCXAqeH9SYDrGDe/QqKFSX01xJ8RtGggvZcD5nnO9BmLM40yrR5ILGhyuQiumt82A+pIzSMsxwnTAF0wUmZcy1PigOVE7pAIpza6fmxO9yMjBqq7SCV0rLRYerqEPbuRz5xzkKo8F9c2Q7VyYpOE6S7WojFF2EKMtxaTiYIbTHlsbncwgIuQHKwitTFp7VsgjHec7I37oWFEz9MF9K+WeJv/eNNi5aZuPNmZ1OT+ulpRwrwat1xLDLrrtP26kd0Q0O7Ow36ojRiRv5nk7bfXKv3REHxzm6zDF7swxdvR/Wz647eRB4x+7x/3z8vfGDwLZPOP8871KXmMiZuUHQv8RQHyLq3cA++3+XGK02b/qK3uafEffxDw==&lt;/diagram&gt;&lt;/mxfile&gt;&quot;}">
</div>

#### Fold Boundary Method
In below Example, **Key** = $456789123$ and **M** = $1000$ <br/>
So we recursively add the **first** $3$ *(which is 456)* and **last** $3$ *(which is 123)* digits of the **Key** till we get the final $3$ digits.<br/><br/>
<div class="mxgraph" style="max-width:100%;border:1px solid transparent;margin:auto;"
    data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;toolbar&quot;:&quot;zoom layers tags lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; modified=\&quot;2023-03-20T12:48:26.463Z\&quot; agent=\&quot;5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/111.0.0.0 Safari/537.36\&quot; etag=\&quot;AJ5QsbBNmaTaV2PLUXXG\&quot; version=\&quot;21.0.8\&quot; type=\&quot;google\&quot;&gt;&lt;diagram name=\&quot;Page-1\&quot; id=\&quot;Ff_9cPo2TSigcMYJ5j0y\&quot;&gt;5ZZdb9sgFIZ/jS8n2RC77mWStctFN02NtEm9qag5tdGwiQiJnfz6HWbwV1JlU1dV066CHx/O4bwv4AR0WTafNNsUnxUHGZCQNwH9GBAShWGIP5YcWhKnVy3IteAuqAdrcQQ/09Gd4LAdBRqlpBGbMcxUVUFmRoxprepx2LOS46oblsMJWGdMntLvgpuipWkc9nwFIi985cg3XDIf7MC2YFzVA0RvArrUSpl2VDZLkFY8r0s77/aFt93CNFTmdybAtzlkX1arx4e7NL8/zrLm7viBusXtmdy5jgOSSEy4eMJBbgezOPEMs3fYdWUOXioDjeWFKSWCCIdbo9UPWCqpNJJKVRi5eBZSThCTIq/wMcNWAPliD9oINGHuXpSCc1tmURfCwHrDMluzxi2HTKtdxcF2GXbLsgmgeVGpqNMfNy6oEow+YIibQLy7bs+S1D3X/Q5IHCoG5nsxmdtzeZe5twUHzpk/cSm67FJE6P/tEo3e2yVyxqWJ+lDxub2VelUHRpyTCPjJ/XRRoIEA8RkBPNMgmRH7cfpzqrgKX5XAwp3+lEz0jyfCbtVOZ+BmDS+mSSIyu5DIMJ2DOUn0y6Su7Vf4Ri+frvjq+q+croDQlDzRJJkcMeQ8hpTP/oFzlrzZOcPH/nvY2tv/q6A3PwE=&lt;/diagram&gt;&lt;/mxfile&gt;&quot;}">
</div>

### Mid Square Method
**HF(Key)** = **ExtractMid3Digits** of **Key**$^2$, **if M** = $1000$ <br>
**Note :** The working of the method might differ, depending upon the requirement. In below, we just take an example to show a general working. <br/>
<div class="mxgraph" style="max-width:100%;border:1px solid transparent;margin:auto;"
    data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;toolbar&quot;:&quot;zoom layers tags lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; modified=\&quot;2023-03-25T14:59:16.873Z\&quot; agent=\&quot;5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/111.0.0.0 Safari/537.36\&quot; etag=\&quot;ME8BfPwOQ1dTu3Ns8FbX\&quot; version=\&quot;21.0.8\&quot; type=\&quot;google\&quot;&gt;&lt;diagram name=\&quot;Page-1\&quot; id=\&quot;-ZnqalRkBzsZdEQq8PH9\&quot;&gt;7Vldb5swFP01kdoHJDAO0MckbRcpyqYtmtY9TS44gGYwc5yv/frZsU1gWdZ8rXQKLwGfa/te33uOMaHjDrLVO4aKZEwjTDrAjlYd974DgGN3bXGRyFoh3cBXQMzSSHfaApP0JzYjNTpPIzyrdeSUEp4WdTCkeY5DXsMQY3RZ7zalpO61QDHeASYhIrvolzTiiUIDsyyJD3EaJ8azY2tLhkxnDcwSFNFlBXIfOu6AUcrVXbYaYCKTZ/Kixj3usZaBMZzzgwZ888aj7vTzyPr6FA4Ww97o/UdLz7JAZK4X3AEeEfP1ZwXKZdR8rVPh/ZjLUPtTmnNrtilUT3RwYCGK3d/axV2sr8T0P2uiEV4L82aoHfjQdWQLeCgrhFH97jTtcTlEVMQ2sYjsqHDqIQpYLdfAoBYw4Hgl8YRnRACOzA5n9DseUEKZQHKaY7mglJDfIETSOBfNUBQJC7y/wIyngl49bcjSKJJu+ssk5XhSoFD6XAoxCYzReR5hWT9b52uig3JMWwnGgWXY0gFe7eWIUzJPSBbTDHMms6sHuIa9Wq3AtJdb7oNAY0mF91BjSMstLqfeMlLcaFIeQVDwvxBUBzUvzpoKVCkp5zKhKjJrlufPs6JO34NY/dby5nsQOv6d7zmtPk/UJ2xan+7x+nymLMLMClUlepvR7MayqvitIv3FKPkPfAr2qgdR1bN2cF/t7k6ntnoGldAZopGK2SsXu9XS6VoKmtYSvGYtwVdXkrS1WrqIlqBX15ILmtZS95q11NBz6cDzaXvgO1xYDnxrwvL2Cuvs94EPn/bS4lrrD8HL9YevWX7/avfV4eONeNG/Lf9XamiHfWHbbHfTY3ZTr+ndNGjl1JSc/nb2b+V00qm/cTndtYeTJg8nf6j/hQ4norn9UraxVb43ug+/AA==&lt;/diagram&gt;&lt;/mxfile&gt;&quot;}">
</div>