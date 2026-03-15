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

<pre>
    #include <iostream>

	using namespace std;

	int main() {
		cout << "Hello, World!" << endl;
	}
</pre>

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

<pre> 
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
</pre>

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