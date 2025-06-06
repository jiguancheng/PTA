### 第一题

比较好做，枚举判断就可以了。如果超时的话，可以考虑先枚举出给定范围内的质数（预处理），缩小范围。

---

### 第二题

这道题的主要目的就是把数字和符号分开。

```text
样例：
32*((2-2)+5)/(-15)
```

#### 易错点：

- 注意到括号中单独的`-15`没有被分为`-`和`15`，也就是说括号内第一项和式子的第一项如果前面有符号（+、-）要保留。
- 题目里没有明确说明，不过会出现`+120-54`、`10*(+12-23)`这样的情况，也就是说，正负号都要考虑
- 有小数，不要忘了小数点

具体过程：

- 逐个字符判断：
    - 字符是运算符号（+-*/()）
        - 不可能为数字前的正负号：直接输出，判断下一个字符（continue）
        - 是数字前的正负号：继续运行，接下来是处理数字的部分
    - 此时是符号的情况已经continue掉了，从下一个字符开始依次判断，一直到遇到第一个不在数字范围（`0`-`9`、`.`
      ）内的字符，此时输出找到的数字部分，接下来从第一个符号处开始判断。

至于正负号的判断，可以用一个flag，初始值为true（表达式开头），遇到`(`把flag设置为true，其他字符把flag设置为false。

---

### 第三题

枚举就可以了。可以预处理一下，在枚举时跳过偶数。

---

### 第四题

这里建议可以考虑先做第五题~~第五题是第四题的Plus版~~，用数学方法直接解决问题比模拟过程要快很多。  
如果要模拟的话，可以尝试一下使用链表，用链表来进行删除数据的操作比较快（当然用数组也行）。下面是使用链表模拟的注意事项

构建一个链表时，最好直接使用malloc申请一块内存，**不要在循环里面构建链表！**

```c++
// 注意：这是错误示例！
struct node start = {1};
struct node *last = &start;
for (int i = 2; i < n + 1; ++i) {
    struct node next = {i};
    last->next = &next;
    last = &next;
} // 循环结束之后会清理循环中定义的变量
// 每一次循环之后，这里的struct node next都会被清理
last->next = &start;
struct node *now = &start;
```

可以考虑使用malloc申请连续的内存（当然也可以用固定长度的数组）

```c++
struct node *list = malloc(sizeof(struct node) * n);
list[0].pos = 1;
struct node *last = &list[0];
for (int i = 1; i < n; ++i) {
    list[i].pos = i + 1;
    last->next = &list[i];
    last = &list[i];
}
```

对于这道题，可以将链表首尾相连，就是让最后一项的下一项指向第一项，方便循环

---

这题是第四题的Plus版，需要使用数学方法。鉴于本人也是自己列数据找规律做出来的，这里直接放一个讲这类问题的链接吧  
[约瑟夫环——公式法（递推公式）-CSDN博客](https://blog.csdn.net/u011500062/article/details/72855826)  
这篇文章最后也有给出计算代码。

---

### 第六题

这题是一道数学题 :(  
首先，第二个样例点的数据应该很大，所以直接枚举是过不了的，要先缩小范围。  
这里$a_1$是$x$的因数，$b_1$是$x$的倍数，通过这个我们可以把范围缩小到$b_1$的因数（$O(\sqrt{b_1}))$）  
这道题到这里就足够了，只需要枚举1到$\sqrt{b_1}$，依次判断是否满足条件

此外，条件等价于
$
\begin{cases}
a_0 / a_1 与 x / a_1互质\\
b_1 / b_0 与 b_1 / x互质
\end{cases}
$，可以提前计算$a_0 / a_1$、$b_1 / b_0$，减小计算量。

---

### 第七题

第七题比较简单，只需要开三个数组，两个存储输入的两组数字，一个用来存储要输出的数字（去重），写一个查找数组中有没有要找数字的函数然后枚举就可以了。  
~~示例代码在胡写，不要在意这么多~~

---

### 第八题

第八题和第七题一样，输入的时候判断一下就可以了。

---

### 第九题

开一个大小为1000的数组表示每个标签的出现次数。注意出现**次数相同**要取**编号大**的。

---

### 第十题

第十题只需要模拟就可以了，开一个大小为m的数组，如果没有占满就取空的地方放入一个顾客，如果满了就把最早结束的顾客取出。  
可以维护一个变量`current_time`作为当前时间，将顾客结束时间放入队列，每次只需要找到最小值就可以了。  

进一步，如果要更快的运行，可以考虑写一个优先队列（队列中数据有序排列），在m较大时效果会好一些。

---

### 第十一题

直接算就行了。最好开**long long**  
~~没试，不过感觉int是过不了的~~

---

### 第十二题

两个数互质 等价于 两个数的最大公因数 == 1  

---

### 第十三题

就是统计，没啥难的

---

### 第十四题

算就完了，之前做过类似的。  

---

### 第十五题

枚举矩阵C左上角的位置，计算结果后取最小值即可。  
注意C要保证右下部分能放下B的大小  
