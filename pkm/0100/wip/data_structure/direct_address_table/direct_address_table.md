# Direct Address Table

## Theory
- In Direct Address Table, the key of every item is the index in which it will be stored.
- In case of Hash table, memory is allocated contiguously.
- So just by getting the key, we can directly jump to the index, hence the time complexity $O(1)$

## Diagram
<div class="mxgraph" style="max-width:100%;border:1px solid transparent;"
    data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;toolbar&quot;:&quot;zoom layers tags lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; modified=\&quot;2023-03-19T12:11:00.714Z\&quot; agent=\&quot;5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/111.0.0.0 Safari/537.36\&quot; etag=\&quot;kHoGZrZPMYHOls3R_7oc\&quot; version=\&quot;21.0.6\&quot; type=\&quot;google\&quot;&gt;&lt;diagram name=\&quot;Page-1\&quot; id=\&quot;bxFyXsgCklLcgzZhW7Ri\&quot;&gt;5Ztdb5swFIZ/TS43Yb5CLpu0XaVtVaduans1OeAGqwRH4DTJfv1MwCT4JBv9yiHKVewDtvHrB+fFmJ4zmi6/ZHQWfxcRS3q2FS17znnPtonlWeqniKzKiBf0y8Ak41F10iZwy/8wXbKKznnE8saJUohE8lkzGIo0ZaFsxGiWiUXztEeRNFud0QkDgduQJjB6xyMZl9FAd6uIXzE+iXXLxKqOjGn4NMnEPK3aS0XKyiNTqqupTs1jGonFVsi56DmjTAhZpqbLEUsKWbViZbnLPUfrS85YKtsUCG+sH+J6/I0/5JfXv527u6df6aeqlmeazFnzauVKi7OIuWS3MxoW+YUCoOcMYzlNVI6oJM1n5ZA88iVTbQ2rKlkm2XLvtZJaAQUVE1Mms5U6RRfwgrJIxVNQXdViMzhuFYq3xkXHaIXDpK54o4tKVNK8QCYbyNQJlQbdUskBKpFOyGTARGxkndyjoAldJg/I1A2dTJx8ZJ3848AJW6Y+kMnphE4GTraFrFNwFDihyzQAMrmd0MnEyUXWSVv8rvOErhO04l4nhDKBwnaZ5DjMOL5O0I77nRDKAMrB9pnkOPw4vk7QkPc7IZQJFLbTJMfhyPF1gpY86IRQBlAuttckx+HJ8XWCpnzQCaFMoLDNpn0cphxfJ2jKgU6qGj7LVWaIoJjrmIt2/c8e0Mz2PShaHXx/1aBDh8/GWSym43n+f9neQ6V+x7y5Db05tFKHVMi3DW+APZXb0JTDW++QCnmepe+sriwZ2NCQwyUDTIrIAFsh6MThoi/mTISvEPTg8A0w7n1G0O8zaL+hrcTVyEHXCFpvIBFLo7Nis4bKhQnNcx42lVnvoyic0bmlcmzJ5f1W+qFIq26XufPl1qHzlc6kqi/3VXXrzFapIrspts7pcuWlsgjsEjFGRHVHzLOQtbihJM0mTP7rxN1DvDWA3o4B1LGMJVTy5+b17hrVqoUbwVVPaoIc1/i/dwwwyn5WpTZswIr2LXvqikodQEVryOpuv2HPQYsnmdPgzm/JXYDJneeT5tzefyV3tvngQw7MXZsnw5PgzmvJHUGd8Ly+AZ45T7UGz92zTeZQ4MGH6xMFz24LntXDBC8wwBu8Fjxz35H5l/3R4ME1ixMFz20Jno/K3aDJXb1h5sXc+QZ35jPER3PX4vXsaXDntJ3wUMHzLQM805m1Bs9cK/EODB5cXjtR8IKW4Nmo/7Q+McAznVlr8II9W1cPBB6xdm0g8BMl13CsEpMi8ZWtch1UrdRxgKhkS9mEMpeZeGIjkYhMRdafrDjDR54kRogmfJIWZCtimIoPi0UrHtLkrDow5VGU7Hvz1US/bFN/XOO90zqYa66D7XoF7e9AzvRO77jdES6ogrG7onmsTvlJx0q9Ex/DelbXI7hjRbz+3OqNQ6iym++tyrt18z2bc/EX&lt;/diagram&gt;&lt;/mxfile&gt;&quot;}">
</div>

### Drawback
- Say we have 10 keys, and among them one key is $100000$.
- So in this case, to store all the 7 elements we need $100000$ size HT.
- Among $100000$ entries in the HT only 7 index has value and rest are empty.