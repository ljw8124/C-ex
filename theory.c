
/*
 * C 언어를 이용한 프로그래밍
 - C 언어란?
   사람과 컴파일러가 이해할 수 있도록 약속된 형태의 언어

 - 컴파일러는 프로그래밍 언어로 작성된 프로그램을 컴퓨터가 이해할 수 있도록 기계어로 번역해주는 번역기이다.

 - 어셈플러는 기호로 표현된 어셈블리 코드를 기계어로 변역하는 번역기

 - 인터프리터는 컴파일러와 달리 한 줄씩 해석하고 실행하는 언어처리 프로그램

 C 는 UNIX 운영체제 구현에 사용할 목적으로 개발됨.
 컴퓨터 기종간 호환성을 가진 고급이면서, 하드웨어를 제어할 수 있는 새로운 언어가 필요하게 됨.
 -> 어셈블리어였던 UNIX 운영체제가 거의 C 로 대체

 - C 의 특징
   1. 프로그램 이식성이 높다.
   2. 간단한 문법표현으로 함축적인 프로그램 작성이 용이하다.
   3. 저급언어 특성을 가진 고급언어이다.

   C 컴파일러: Turbo C/C++, Dev-C++, Visual C++, GCC, ...

   C 프로그램의 완성 과정: 코딩 -> 컴파일 -> 링킹(실행, 수행)

   C 프로그램의 구성
    도입부 - 함수호출(메인부/ 메인부는 반드시 존재하여야 한다) - 호출된 함수 부분

   C 프로그램의 기본 구조
    1. C 프로그램은 반드시 하나 이상의 함수를 포함해야 한다.
    2. main() 함수가 반드시 존재해야 한다.
    3. 함수의 시작과 끝을 알리는 중괄호 {} 를 사용해야 한다.
    4. 중괄호 안에는 변수선언문, 치환문, 연산문, 함수 등의 명령을 기입한다.
    5. 선행처리기(preprocessor)를 제외하고 문장의 끝에는 세미콜론(;)을 붙인다.

   C 프로그램의 구성요소
    - 예약어, 명칭, 상수, 연산자, 설명문
    - 명칭의 규칙
      영문자와 숫자의 조합으로 만든다.
      명칭의 첫 문자는 영문자나 밑줄(_)이어야 한다.
      특수문자를 사용해서는 안 된다.(단, 밑줄(_) 사용가능)
      문자 사이에 공백이 있어서는 안 된다.
      예약어를 사용할 수는 없다.
      영문자 대문자와 소문자는 서로 구별하여 사용
      명칭의 길이는 컴파일러에 따라 차이가 있다.(일반적으로 32자 까지 인식가능)

   상수와 변수
    - 상수는 항상 고정된 값을 갖는 자료로 값이 한 번 정해지면 변경되지 않는다.
    - 정수형 상수: 10진수, 8진수, 16진수로 표현한다.
    - 실수형 상수: 부동소수점 형 상수, double 형을 기본 자료형으로 사용한다.(float, long double, double...)
    - 문자형 상수: 단일 인용부호('')로 묶여 1개의 영문자나 숫자문자를 사용 -> ASCII 코드 사용
    - 문자열 상수: 이중 인용부호("")로 묶여 있는 복수개의 영문자나 숫자, 기억공간에 보관될 때는 문자열 끝에 null 문자(\0)가 추가
                -> SEOUL KOREA 같은 경우 맨끝에 공백문자를 추가하여 12개로 인식(문자열 10개, 공백 2개)
    - 변수: 프로그래밍에서 가장 중요한 것으로, 변할 수 있는 곳.
           프로그램 실행 도중 변할 수 있는 값이 저장되는 기억공간을 의미함.
           즉, 자료를 저장한 기억공간을 확보하고 이 공간에 이름을 붙여준 것을 말한다.
    - 변수의 특징: 모든 변수는 이름이 있다.(변수명)
                모든 변수는 정해진 자료형이 있다.(정수 자료형 등)
                모든 변수는 할당된 값을 갖는다.
    - 변수명의 정의 규칙: 변수명은 반드시 영문자나 밑줄로 시작해야한다. 밑줄 이외의 특수문자를 섞어서 명명할 수 없다.
    - 열거형: 숫자 대신 단어를 사용
            형식: enum 태그명 {열거자1, 열거자2, ...} // 이때 enum 은 예약어!

    - 변수 선언 시 고려 사항
      1. 변수에 저장될 값의 크기(범위):
      2. 변수의 선언 위치(스코프)
      3. 변수의 초기화(값의 부여 여부)

    - 선행처리기(preprocessor)
      컴파일에 앞서 프로그램 선두에 선언된 지시자들을 미리 처리하는 역할을 수행
      종류) #include - 파일 포함(헤더 파일(-.h)를 자신의 소스파일에 읽어 들여 함께 컴파일 하고자 할 때 사용)
           #define - 매크로 정의(선행처리기 #define을 사용하여 단순 치환되는 자료로서 매크로 상수나 매크로 함수 정의로 사용) <-> 정의 해제(#undef)
           #if/#else/#elif/#endif - 조건부 컴파일(매크로처럼 정의하고, 조건문을 거친 후에 그 값에 맞는 결과를 반환한다.)

      *선행처리기 사용 시 주의할 점
       반드시 #으로 시작한다.
       선행처리기 명령문 끝에는 세미콜론(;)을 붙이지 않는다.
       한 줄에 하나의 명령만 작성한다.
       소스 프로그램의 첫 부분에 위치한다.

    - 표준 입출력 함수
      *함수란? 특정 작업(기능)을 수행하도록 설계된 독립적인 프로그램

    - 표준 출력함수
      1. printf()  : 화면에 여러 종류의 자료를 출력
      2. putchar() : 화면에 1개의 문자를 출력
      3. puts()    : 화면에 문자열을 출력

    - 표준 입력함수
      1. scanf()   : 키보드를 통해 여러 종류의 자료를 입력 받음
      2. getchar() : 키보드를 통해 1개의 문자를 입력 받음
      3. gets()    : 키보드를 통해 문자열을 입력 받음

    - 출력양식 변환기호
      1. %d: 지정한 자료를 부호 있는 10진 정수로 변환하여 출력 (정수형, 문자형)    -> dobule
      2. %u: 지정한 자료를 부호 없는 10진 정수로 변환하여 출력 (정수형, 문자형)    -> unsigned
      3. %f: 지정한 자료를 부동소수점형식으로 변환하여 출력 (실수형)              -> float
      4. %e, %E: 지정한 자료를 지수형태로 변환하여 출력 (실수형)                -> exponent
      5. %c: 지정한 자료를 한 문자로 변환하여 출력 (정수형, 문자형)              -> char
      6. %s: 지정한 자료를 문자열로 변환하여 출력 (문자열 포인터, String)        -> String
      7. %o: 지정한 자료를 부호 업는 8진수로 변환하여 출력 (정수형, 문자형)        -> octal
      8. %x, %X: 지정한 자료를 부호 없는 16진수로 변환하여 출력 (정수형, 문자형)   -> hexadecimal

    * 권장하지 않는 함수 사용에 대한 경고 메시지 무시 #pragma warning(disable:4996) <- scanf 는 함수사용 권장하지 않기 때문에 사전방지용

    - 연산자: 임의의 자료에 대한 각종 연산을 수행 하도록 하는 기호
      1. 산술: + - * / % ++ --
      2. 관계: < > >= <= == !=
      3. 논리: & || !
      4. 대입: += -= *= /= %= <<= >>= != &=
      5. 조건: ?:
      6. 비트: & | ^ ~ << >>
      7. 기타: sizeof() cast & *

    * 비트 연산자
      & : 대응되는 두 bit 가 모두 1일 때만 결과가 1
      | : 대응되는 두 bit 중 하나라도 1이면 결과가 1
      ^ : 대응되는 두 bit 가 서로 다를 떄만 결과가 1
      ~ : 1 은 0 으로, 0 은 1으로 반환
      << : 우항에 있는 값 만큼 비트를 왼쪽으로 이동 -> 이 때 좌측 끝에 값이 없는 부분은 0으로 대입
      >> : 우항에 있는 값 만큼 비트를 오른쪽으로 이동 -> 이 때 우측 끝에 값이 없는 부분은 0으로 대입

    * 기타 연산자
      sizeof(): 지정한 자료형, 수식, 변수가 차지하는 기억공간의 크기(byte)를 구함
      cats(형변환): 지정한 자료형을 다른 자료형으로 강제적으로 바꿈
      &: 주소 연산자로서 피 연산자의 주소를 나타냄 (주소는 포인터를 다룰 때 용이하게 사용)
      *: 내용 연산자로서 피 연산자의 내용을 가져옴

    - 프로그램 언어의 제어 구조
      순차적 제어: 특별한 지정이 없는 한 위에서 아래로 수행하는 제어구조
      선택적 제어: 주어진 조건에 따라 특정부분으로 수행을 옮기는 분기 제어구조
      반복적 제어: 특정 부분을 일정한 횟수만큼 반복수행하는 반복 제어구조

    * 선택 제어문 -> if, switch ~ case, goto

      단순 조건문 if 는 분명하지 않은 문제가 생겨서, if ~ else ~ 가 등장하게 됨, 그리고 다중 if ~ else ~ ... 문이 등장하게 됨
      switch ~ case 문 의 경우는 수식을 기반으로 case 값을 출력하는 형태이다. -> 주어진 값에 따라 여러 곳 중 한 곳으로 분기하여 실행
      이 때, case 가 끝나는 경우에 break 가 필요하다.
      goto 문은 무조건 분기하는 명령문이다.

      Label:
        goto Label;
        ...
      형식이다.

      goto 문의 사용 불가 상황 -> 레이블과 호출부의 스코프가 다른 경우

    * 반복 제어문 -> for, while, do ~ while
      다중 for 문의 경우에도 마찬가지로 다중으로 for 문을 중첩한 경우를 말한다.
      while 문과 달리 do ~ while 문장은 while(); <- 세미콜론을 꼭 추가해야 한다.

    * 기타 제어문 -> break(반복문을 빠져나오는데 사용, 자신이 포함된 반복문만 빠져나온다), continue(루프 실행중 다시 루프를 실행하고 싶을 때)


    * 함수란 특정한 작업(기능)을 수행하도록 설계된 독립적인 프로그램
      C 프로그램은 함수들로 구성 -> 몇개의 모듈 단위로 분리하고, 각각의 모듈에 해당하는 내용을 함수로 작성
      => 실행 순서에 따라 그 함수들을 차례로 호출하여 실챙

      함수의 특성
      1. 서로 자유로이 호출가능
      2. 모든 함수는 서로 독립적

      함수의 장점
      1. 프로그램 수정이 용이하다.
      2. 함수 재사용으로 코드중복을 최소화한다.
      3. 프로그램 기능을 한 눈에 파악할 수 있게해줌으로써 유지관리가 쉽다

      ex. 단위 프로그램을 하나의 함수 안에 기술된 경우
          - 함수의 길이가 커짐
          - 프로그램의 가독성 문제가 생김
          - 수정이 어려워짐 -> 유지보수
          - 일부분만 재호출이 불가능해짐 -> 모듈화 불가능

          => 해결: 기능별 독립된 단위(함수)로 구성 -> 효율적, 모듈화로 인해 재사용 가능

      표준함수: C 언어 자체에서 제공하는 함수 -> 헤더파일에 정의, 실체는 라이브러리 파일에 수록, 사용시 헤더파일을 #include 시켜 주어야 한다.
              ex. printf(), scanf() 함수의 원형 -> 사용시 stdio.h 를 #include(선행처리)
                  sin(), cos() 함수의 원형 -> 사용시 math.h 를 #include(선행처리)
      사용자 정의함수: 사용자가 단위프로그램을 함수로 정의하여 사용하는 함수
              구조: 반환자료형 함수명 (자료형 매개변수1, 자료형 매개변수2, ...) { 함수몸체(반환자료형을 썼을 경우 return 값 타입 통일) } => 반환 값이 없는 경우 void

      함수를 사용하기 위해서는.. 1. 함수의 원형 선언 -> main() 함수 이전에 미리 선언
                             2. 함수의 호출
                             3. 함수의 정의 로 구성된다.

      매개변수
      1. 실 매개변수: 실제로 함수에 전달하는 매개변수
      2. 형식 매개변수: 함수에 적혀있는 형식적인 매개변수
      => 자료형이 일치하지 않는 경우는 형 변환이 발생한다.
         변수의 개수가 일치하지 않는 경우에는 컴파일 에러가 발생된다.

      매개변수 사이의 자료전달 방법
      1. 값에 의한 자료전달
         - 기본적인 자료전달 방법
         - 실 매개변수와 형식 매개변수 사이에 값의 전달
         - 호출한 함수의 실행이 끝난 다음 전달받은 값을 되돌려 받지는 못한다(return 이 안됨)
      2. 참조에 의한 자료전달
         - 호출함수와 피 호출함수의 매개변수 값을 서로 교환할 수 있는 자료전달 방법
         - 값을 전달하는 것이 아니라 실 매개변수 값이 저장되어있는 주소 값을 전달한다.

      기억 클래스
      - 변수를 기억공간의 특정영역에 할당하는 방법
      - 즉, 각 변수의 유효범위와 존속기간을 설정
        -> 변수의 사용위치에 따라 지역변수/전역변수로 나뉨
        -> 변수 존속기간에 따라 자동변수/정적변수/외부변수/레지스터변수로 나뉨

        1. 지역변수
           특정범위 내에서만 통용되는 변수, 선언된 블록/함수 내에서만 사용가능 ex)함수 사용되는 매개변수
        2. 전역변수
           모든 위치에서 사용/통용 가능한 변수

        => 전역변수와 지역변수의 비교
           - 동일 범위 내에서는 지역변수가 우선된다
           - 전역변수의 선언은 프로그램 선두에 위치한다
           - 가급적 지역변수를 사용하는 것이 효율적이다(함수의 독립성 향상, 디버깅 효율 향상, 기억 공간 절약)

        3. 변수의 기억클래스 종류
           변수의 초기화, 존속기간, 유효범위에 따라 구별, 기조느이 변수 선언문에 기억클래스만  기입하면 됨 ex) static int i = 0;
           - 자동 변수: auto => 생략가능, 초기화가 필요하다, 작은 범위의 값이 우선된다.
           - 정적 변수: static => 전역 변수에 해당하고, 초기화가 없으면 0으로 초기화 되며 변수의 값은 프로그램 실행 중 계속 유지(동일한 값으로) 따라서 한번만 초기화 된다.(최초의 한번만)
           - 외부 변수: extern => 함수의 외부에서 선언, 전역 변수에 해당하며 초기화가 없으면 0으로 초기화됨. 다른 파일에서 외부변수로 선언된 변수의 값을 참조할 수 있다.
           - 레지스터 변수: register => CPU 내 레지스터에 자료를 저장하고자 할때 사용, 자동 변수와 동일한 속성을 가짐. 주로 반복문에서 카운터 변수로 사용(프로그램 실행속도 증가 목적)


      배열 -> 효율적인 자료처리를 위해 사용
      - 동일한 자료형을 갖는 자료들의 르스트
      - 배열의 각 요소는 하나의 변수로 취급
      - 배열은 배열명과 첨자로 구분

      배열의 선언형태
      - 1차원: 배열의 첨자가 하나만 있는 배열, 첨자의 개수는 배열 전체의 구성요소의 개수를 의미한다, 배열의 각 요소는 배열명과 첨자로 구분(첨자는 0부터 시작, 자료형과 기억 클래스는 갖는다)
              형식: 자료형 배열명[개수], ex) int a[10] -> 이 때 array(배열명)은 배열영역의 시작주소를 의미한다.
              초기화: 배열을 선언하면 기억공간을 초기화 해야한다. 1. 선언 후 초기값 할당 2. 선언과 동시에 초기값 할당 3. 외부에서 전달받아 초기값 할당
      - 2차원: 자료형 배열명[행의 수][열의 수] 형식으로 사용된다. ex) int a[3][4] -> 3 * 4 = 12개의 요소를 가진 배열을 말함
      - 3차원: 자로형 배열명[면의 수][행의 수][열의 수] 형식으로 사용된다. ex) int a[2][3][4] -> 2 * 3 * 4 = 24개의 요소를 가진 배열을 말함
      - char 형 배열: char 배열명[문자열 길이 + 1] 형식으로 사용된다. ex) char str[12] -> 배열명이 str 이고, 12문자 길이를 가진 char 형 배열을 말함 => 문자열 단위로 초기화(공백도 인식), 문자 단위로 초기화(공백문자 \0 를 넣어 주어야 함 )

      배열을 함수의 매개변수로 사용할 경우
      -> 함수 호출 시 배열명만 명시하여 호출
      -> 함수의 헤더에는 1차원 배열의 경우 크기 생략가능, 다차원 배열의 경우 가장 높은 차원의 크기 생략가능


      포인터: 변수의 일종으로, 포인터는 특정 데이터가 저장된 기억장소의 주소(번지)값을 가지고 있음 => 일반 변수와는 조금 다름
      -> 따라서 포인터는 기억공간을 변수명으로 접근하지 않고 주소로 접근하기 위해 사용한다.

        1. 일반적인 변수의 기억공간 표현
           - 변수는 변수선언에 의해 기억공간이 할당되고 할당된 기억공간에 변수에 대입된 데이터가 저장된다.
             이 때 할당된 기억공간은 주소(번지)가 부여되어 있다.
           - 주소를 이용하여 변수와 같은 동일한 작업 가능
           - 따라서 주소 값(포인터 값)을 다룰 수 있는 변수가 필요하다. -> 포인터 변수라고 함

      포인터 변수의 선언과 참조

      1. 포인터 변수의 선언
         형식: 자료형 *포인터변수명; ex) int *p; -> 변수 p 는 포인터 변수로서 정수형의 자료를 갖는 변수의 주소를 갖는다.
         ex)
         int a, b;
         int *p;       -> 변수 p 를 포인터 변수로 선언
         a = 5000;
         p = &a;       -> 포인터 변수 p 에 변수 a 의 주소 값을 대입
         b = *p        -> 포인터 변수 p 가 가리키는 주소의 내용을 변수 b에 저장(a 의 값 5000이 b 에 저장)

      2. 포인터 변수의 참조 -> &, * 연산자 사용
         ex)
         int *p, i = 4;
         *p = i 라고 했을 때,
         p는 i의 주소가 어디인지 모르게 된다.
         비슷하게 i 가 아닌 임의의 상수 값을 대입하더라도, 무의미한 참조가 되게 된다.

         즉, 올바르게 참조 하려면 아래와 같다.
         int *p, i = 4;
         p = &i;
         *p = 10; -> i 의 값을 4에서 10으로 변경

      3. void 형 포인터
         형식: void *포인터명;
         의미: 프로그램 실행시에 자료형이 결정되는 경우에 사용하고 저장하기 전 명시적 형변환이 필요하다.

      포인터 연산
      1. 포인터와 기억공간의 대응관계
         -> 포인터를 1 증가시키면 실제 주소는 int 형의 경우 4byte 증가, char 일 경우 당연히 1byte 만 증가

      2. 포인터 변수에 +, -, ++, -- 연산자를 사용하는 연산, 또한 두 포인터간의 덧셈은 용납되지 않고, 뺄셈은 가능하다.

*/