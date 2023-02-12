SKUFFLE - это язык, основанный на perl, ruby, python, c, java и assembly, является легко переносимым встраиваемым языком 
с возможностью дописывания необходимых элементов стандартной библиотеки. Программа на SKUFFLE имеет расширение .sku,
скомпилированный код - .skc. язык интерпретируемый, виртуальная машина и компилятор написаны на C++, без использования
платформозависимых библиотек. Библиотеки для skuffle пишутся на самом skuffle. Упор в языке сделан на экономичность, 
расширяемость и простоту написания кода. Также поставлены цели:
 - язык должен быть проще python
 - язык должен быть продуманным и лаконичным как с
 - язык должен быть страннее ruby
 - язык должен быть экономичнее java
 - язык должен быть быстрым, как assembly
 - язык должен быть уродливым, как perl


Система типов - смесь java и perl
Ассемблерные вставки
Способ записи команд - ruby+assembly+c
Способ исполнения - python

Доступные типы:
num - число(целое или дробное)
txt - текст
bul - булево значение
obj - объект
exception - исключение

Доступные константы:

NUL - null
LIE - false
TRUTH - true

ключевые слова:

define, include, if, ifnot, butif, while, until, loop, repeat, after, when, go, end, 
return, fun, objref, txt, bul, num, obj, create, exception, ifexcept, NUL, LIE, TRUTH, set, and, 
or, not, xor, fill, del, childof, get, put, event
1.define  - работает как директива define в c
2.include - работает как директива include в c
3.if - ...
4.ifnot - else
5.butif - else if
6.while - ...
7.until - определяет действия происходящие ДО наступления события
8.loop - for
9.repeat - цикл с указанием кол-ва повторений
10.after - определяет действия происходящие ПОСЛЕ окончания события
11.when - определяет действия происходящие ПРИ наступлении события
12.go - {
13.end - }
14.return - ...
15.fun - создание функции
16.objref - class
17.create - создание объекта или переменной в куче
18.exception - throw
19.ifexcept - catch
20.set - структура
21.fill - заполняет массив значением
22.del - удаляет объект
23.childof - наследование
24.get - cin
25.put - cout
26.getf - fin
27.putf - fout
28.event - событие



skubler (skuffle+assembler) - язык-байт код sku.exe
sku содержит:
	количество потоков, равное количеству событий(может меняться в процессе выполнения программы)
	8 регистров общего назначения 4 байтных
	регистр внутренних данных 1 байт |1:CMPRES||||||||||
	стек на 265 подпрограмм
	кучу на 512 мегабайт
	регистр-указатель на вершину стека
	регистр-указатель на файл
	текстовый буфер на 1024 буквы
	


команды
	FLOP var/bytes - file open
	FEND - file close
	FREAD - считывает символ в буфер
	FWRT var/reg/bytes- file write
	RD var/reg - read
	WRT var/reg/bytes - write
	GO - goto
	CMP - CMP - находит разность 2 значений и складывает ее РВД:CMPRES
	GON - go if not zero
	GOZ - go if zero 
	MOV reg/var reg/var/data
	MOVH reg/var reg/var/data-mov для кучи
	DEL var
	INC
	DEC
	SUB
	ADD
	DIV
	MUL
	MOD
	EVN - event
	RET
	XOR
	OR
	AND
	NOT
	
	
	
		