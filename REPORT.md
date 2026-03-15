# Part I

## 1. Создайте пустой репозиторий на сервисе github.com:

git init

## 2. Выполните инструкцию по созданию первого коммита на странице репохитория, созданного на предыдущем шаге:

git add README.md (начинаем отслеживание изменений в файле README.md для коммита)

git commit -m "added README.md" (коммитим)

<pre>
[main 1aa71f1] added README.md
 1 file changed, 2 deletions(-)
 delete mode 100644 README.md
</pre>

 ## 3. Создайте файл hello_world.cpp в локальной копии репозитория. Реализуйте программу Hello world на языке C++ используя плохой стиль кода:

 touch hello_world.cpp

```cpp
    #include <iostream>

	using namespace std;

	int main() {
		cout << "Hello, World!" << endl;
	}
```

## 4. Добавьте этот файл в локальную копию репозитория:

git add hello_world.cpp

## 5. Закоммитьте изменения с *осмысленным* сообщением:

git commit -m "add hello_world.cpp"

<pre>
[main 05d3d79] add hello_world.cpp
 1 file changed, 7 insertions(+)
 create mode 100644 hello_world.cpp
</pre>

## 6. Изменить исходный код так, чтобы в программе через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщения Hello world from @name, где @name имя пользователя:

```cpp
	#include <iostream>
	#include <string>

	using namespace std;

	int main() {
		string name;
		cout << "Enter your name: ";
		getline(cin, name);
		cout << "Hello world from " << name MM endl;
		return 0;
	}
```

## 7. Закоммитьте новую версию программы. Почему не надо добавлять файл повторное git add?

git commit -a -m "improve hello_world.cpp, add check of name"

<pre>
[main ac0b04e] improve hello_world.cpp, add check of name
 1 file changed, 6 insertions(+), 1 deletion(-)
</pre>

 git add не нужен из-за флага -a

 ## 8. Запуште изменения в удаленный репозиторий:

 git push -u origin main

 <pre>Перечисление объектов: 5, готово.
Подсчет объектов: 100% (5/5), готово.
При сжатии изменений используется до 2 потоков
Сжатие объектов: 100% (2/2), готово.
Запись объектов: 100% (3/3), 411 байтов | 411.00 КиБ/с, готово.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
To https://github.com/eDeodX/Lab02.git
   05d3d79..ac0b04e  main -&gt; main
branch &apos;main&apos; set up to track &apos;origin/main&apos;.
</pre>

## 9. Проверьте, что история коммитов доступна в удалёный репозитории:

git log (история коммитов в терминале, на github тоже доступна)

<pre>
<font color="#AA5500">ommit ac0b04e6b021f2541f1a551a06b90d921f0c1910 (</font><font color="#55FFFF"><b>HEAD</b></font><font color="#AA5500"> -&gt; </font><font color="#55FF55"><b>main</b></font><font color="#AA5500">, </font><font color="#FF5555"><b>origin/main</b></font><font color="#AA5500">)</font>
Author: eDeodX &lt;hanromik124@gmail.com&gt;
Date:   Sun Mar 15 18:04:54 2026 +0300

    improve hello_world.cpp, add check of name

<font color="#AA5500">commit 05d3d79645ed4bfe159aa80816b54de0e66604dc</font>
Author: eDeodX &lt;hanromik124@gmail.com&gt;
Date:   Sun Mar 15 17:52:56 2026 +0300

    add hello_world.cpp

<font color="#AA5500">commit 1aa71f132622b7546e55abe8c1f6189f20e7ee34</font>
Author: eDeodX &lt;hanromik124@gmail.com&gt;
Date:   Sun Mar 15 17:21:11 2026 +0300

    added README.md

</pre>

# Part II

## 1. В локальной копии репохитория создайте локальную ветку patch1:

git branch patch1

<pre>
   root@debian:~/eDeodX/workspace/tasks/lab02# git branch
* <font color="#00AA00">main</font>
  patch1
</pre>

## 2. Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std:

git checkout patch1 (перейдем в локальную ветку patch1)

<pre>
root@debian:~/eDeodX/workspace/tasks/lab02# git checkout patch1
Переключились на ветку «patch1»
</pre>

Исправления кода:

```cpp
#include <iostream>
#include <string>

int main() {
	std::string name;
	std::cout << "Enter your name: ";
	std::getline(cin, name);
	std::cout << "Hello world from " << name << std::endl;
	return 0;
}
```

## 3. commit, push локальную ветку в удалённый репозиторий:

<pre>
root@debian:~/eDeodX/workspace/tasks/lab02# git commit -a -m &quot;improved hello_world.cpp (delete using namespace std)&quot;
[patch1 347b807] improved hello_world.cpp (delete using namespace std)
 1 file changed, 4 insertions(+), 6 deletions(-)
root@debian:~/eDeodX/workspace/tasks/lab02# git push -u origin patch1
Перечисление объектов: 5, готово.
Подсчет объектов: 100% (5/5), готово.
При сжатии изменений используется до 2 потоков
Сжатие объектов: 100% (3/3), готово.
Запись объектов: 100% (3/3), 449 байтов | 449.00 КиБ/с, готово.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
remote: 
remote: Create a pull request for &apos;patch1&apos; on GitHub by visiting:
remote:      https://github.com/eDeodX/Lab02/pull/new/patch1
remote: 
To https://github.com/eDeodX/Lab02.git
 * [new branch]      patch1 -&gt; patch1
branch &apos;patch1&apos; set up to track &apos;origin/patch1&apos;.
</pre>

## 4. Проверьте, что ветка patch1 доступна в удалёный репозиторий:

<pre>
root@debian:~/eDeodX/workspace/tasks/lab02# git branch -r
  <font color="#AA0000">origin/main</font>
  <font color="#AA0000">origin/patch1</font>
</pre>

## 5. Создайте pull-request patch1 -> main:

В репо будет видно, что pull-request (pull new version hello_world.cpp) создавался (скорее всего уже в закрытых, т.к patch1 нужно будет удалить)

## 6. В локальной копии в ветке patch1 добавьте в исходный код комментарии

```cpp
#include <iostream> // подключаем заголовочные файлы
#include <string>

int main() {
	std::string name; // создаем переменную имени
	std::cout << "Enter your name: ";
	std::getline(cin, name); // используем geline, т.к обычный cin считывает только до пробела
	std::cout << "Hello world from " << name << std::endl; // выводим результат в консоль
	return 0;
}
```

## 7. commit, push:

<pre>
root@debian:~/eDeodX/workspace/tasks/lab02# git commit -a -m &quot;add comments in hello_world.cpp&quot;
[patch1 9b04e99] add comments in hello_world.cpp
 2 files changed, 74 insertions(+), 8 deletions(-)
root@debian:~/eDeodX/workspace/tasks/lab02# git push -u origin patch1
Перечисление объектов: 7, готово.
Подсчет объектов: 100% (7/7), готово.
При сжатии изменений используется до 2 потоков
Сжатие объектов: 100% (4/4), готово.
Запись объектов: 100% (4/4), 1.46 КиБ | 1.46 МиБ/с, готово.
Total 4 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/eDeodX/Lab02.git
   347b807..9b04e99  patch1 -&gt; patch1
branch &apos;patch1&apos; set up to track &apos;origin/patch1&apos;.
</pre>

## 8. Проверьте, что новые изменения есть в созданном на шаге 5 pull-request:

Действительно есть :)

## 9. В удалённый репозитории выполните слияние PR patch1 -> main и удалите ветку patch1, в удаленном репозитории:

В pull request нажмем merge pull request
После подтвердим слияние confirm merge
Затем delete branch (кнопка появится после слияния веток)

## 10. Локальный pull:

<pre>root@debian:~/eDeodX/workspace/tasks/lab02# git checkout main
Переключились на ветку «main»
Эта ветка соответствует «origin/main».
root@debian:~/eDeodX/workspace/tasks/lab02# git branch
* <font color="#00AA00">main</font>
  patch1
root@debian:~/eDeodX/workspace/tasks/lab02# git pull
remote: Enumerating objects: 1, done.
remote: Counting objects: 100% (1/1), done.
remote: Total 1 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Распаковка объектов: 100% (1/1), 900 байтов | 900.00 КиБ/с, готово.
Из https://github.com/eDeodX/Lab02
   432c78a..423f70a  main       -&gt; origin/main
Обновление 432c78a..423f70a
Fast-forward
 REPORT.md       | 74 <font color="#00AA00">+++++++++++++++++++++++++++++++++++++++++++++++++++++</font><font color="#AA0000">----</font>
 hello_world.cpp | 12 <font color="#00AA00">++++</font><font color="#AA0000">------</font>
 2 files changed, 75 insertions(+), 11 deletions(-)
</pre>

## 11. С помощью команды git log просмотрите историю в локальной версии ветки main:

git log

<pre><font color="#AA5500">commit 423f70ab4b79c4a0225322b25ed6ccf73d79d35e (</font><font color="#55FFFF"><b>HEAD</b></font><font color="#AA5500"> -&gt; </font><font color="#55FF55"><b>main</b></font><font color="#AA5500">, </font><font color="#FF5555"><b>origin/main</b></font><font color="#AA5500">)</font>
Merge: 432c78a 9b04e99
Author: eDeodX &lt;hanromik124@gmail.com&gt;
Date:   Sun Mar 15 19:45:42 2026 +0300

    Merge pull request #1 from eDeodX/patch1
    
    Pull new version hello_world.cpp

<font color="#AA5500">commit 9b04e99aea397f6b04b5c3fc3c92a34e2d3da3c7 (</font><font color="#FF5555"><b>origin/patch1</b></font><font color="#AA5500">, </font><font color="#55FF55"><b>patch1</b></font><font color="#AA5500">)</font>
Author: eDeodX &lt;hanromik124@gmail.com&gt;
Date:   Sun Mar 15 19:40:40 2026 +0300

    add comments in hello_world.cpp

<font color="#AA5500">commit 347b8072b390a66536db6780a814e76f4d9d7c52</font>
Author: eDeodX &lt;hanromik124@gmail.com&gt;
Date:   Sun Mar 15 19:23:40 2026 +0300

    improved hello_world.cpp (delete using namespace std)

</pre>

## 12. Удалите локальную ветку patch1:

git branch --delete patch1

<pre>root@debian:~/eDeodX/workspace/tasks/lab02# git branch --delete patch1
Ветка patch1 удалена (была 9b04e99).
root@debian:~/eDeodX/workspace/tasks/lab02# git branch
* <font color="#00AA00">main</font>
</pre>

# Part III

## 1. Создайте новую локальную ветку patch2:

git branch patch2

## 2. Измените *code style* с помощью утилиты **clang-format**. Например, используя опцию -style=Mozilla:

clang-format -style=Mozilla -i hello_world.cpp

```cpp
#include <iostream> // подключаем заголовочные файлы
#include <string>

int
main()
{
  std::string name; // создаем переменную имени
  std::cout << "Enter your name: ";
  std::getline(
    std::cin,
    name); // используем getline, т.к обычный cin считывает только до пробела
  std::cout << "Hello world from " << name
            << std::endl; // выводим результат в консоль
  return 0;
}
```