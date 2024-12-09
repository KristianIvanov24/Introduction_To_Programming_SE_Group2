# Указатели. Символни низове.

## Въведение в указателите.
Оператор **&**

 - Приема променлива от тип Т.

 - Връща указател от тип T*.
 
 
```c++
  int number = 10;
  int* ptr = &number;
``` 


Оператор<b> * </b> (дерефериране)
- Приема указaтел от тип Т*
- Връща променлива от тип Т


```c++
  int number = 10;
  int* ptr = &number;
  int result = *ptr; 
  cout << result; //10
```

Разлика между указател и референция?

 - Указателят може да се "re-assign"-ва. Може да приема нови стойност
 - Референцията трябва да се инициализира при създаването.
 - Указателят има неутрална стойност (nullptr), а референцията няма.
 - Може да се направи масив от указатели, но не и масив от референции.

```c++
   int arr[] = {1, 2, 3};
int* ptr = arr;
```

![enter image description here](https://i.ibb.co/cDcX8st/Untitled-Diagram-drawio-3.png)


```c++
	ptr++;
	cout << ptr[0]; //2;
	cout << ptr[1]; //3;
```

 ![enter image description here](https://i.ibb.co/xLLsVK5/Untitled-Diagram-drawio-4.png)

## Въведение в символните низове (стрингове).

   ```c++
	char str[] = {'t', 'e', 's', 't', '\0'};
	char str2[] = "test"; //equivalent to str
	char str3[7] = "test"; 
```

![enter image description here](https://i.ibb.co/ZmRwt6R/Untitled-Diagram-drawio-5.png)

Примерна имплементация на:

 - strlen (намиране на дължина на стринг)
 - strcpy (копиране на стринг)
 - strcat (конкатениране на стрингове)
 - strcmp (лексикографско сравнение на стрингове)
