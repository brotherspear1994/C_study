### C언어 기초

------

#### C언어란?

C언어는 현재 사용하고 있는 거의 모든 컴퓨터 시스템에서 사용할 수 있는 프로그래밍 언어입니다.

 

프로그래밍 언어란 컴퓨터의 시스템을 구동시키는 소프트웨어를 작성하기 위한 언어를 의미합니다.

이러한 프로그래밍 언어는 크게 저급 언어(low-level language)와 고급 언어(high-level language)로 나뉩니다.

 

저급 언어와 고급 언어는 좋고 나쁜 언어가 아니라, 기계가 이해하기 쉬운가(저급 언어), 사람이 이해하기 쉬운가(고급 언어)를 상대 적으로 나눈 개념이라고 할 수 있습니다.

 

저급 언어는 컴퓨터가 이해하기 쉽게 작성된 프로그래밍 언어로, 대표적인 언어로는 기계어(machine language)와 어셈블리어(assembly language) 등이 있습니다.

이 언어는 실행 속도가 매우 빠르지만, 사람이 배우기에는 매우 어려워 프로그램의 유지보수가 힘듭니다.

 

고급 언어는 컴퓨터보다는 사람이 알기 쉽도록 작성된 프로그래밍 언어입니다.

고급 언어는 컴파일러나 인터프리터에 의해 기계가 이해 할 수 있는 언어로 번역되어 실행 됩니다.

그래서 저급 언어보다는 상대적으로 실행 속도가 느립니다. 대표적으로 자바, 파이썬 등이 있습니다.

이 언어는 저급 언어에 비해 가독성이 높고 다루기가 쉽습니다. 

 

C언어는 저급 언어와 고급 언어의 특징을 모두 가지고 있는 절차 지향 프로그래밍 언어(procedure-oriented programming language)입니다.

------

#### C언어의 역사

C언어는 1972년 벨 연구소의 켄 톰프슨(Kenneth Thompson)과 데니스 리치(Dennis Ritchie)가 유닉스(UNIX) 운영체제에서 사용하기 위해서 개발한 범용적인 고급 언어입니다.

A언어라고 불리는 ALGOL 60부터, CPL, BCPL을 거쳐, 켄 톰프슨이 B언어를 개발하게 됩니다.

이후 데니스 리치가 B언어를 좀 더 개선하여 지금의 C언어를 만들게 됩니다.

C언어라는 이름의 유래 또한 B언어 바로 다음에 개발되어서 명명된 이름입니다.

------

#### C언어의 탄생 배경

C언어 이전에 유닉스 운영체제는 어셈블리어라는 저급 언어를 사용했습니다.

하지만 어셈블리어는 특정 하드웨어에 종속적인 언어여서, 이 언어로 작성된 프로그램은 다른 하드웨어로 이식할 수 없었습니다.

즉, 하나의 기능을 하는 프로그램을 CPU의 종류만큼 여러 번 작성해야만 했던 것입니다.

따라서 이식성도 좋고 어셈블리어보다 쉬운 언어가 필요해졌고, 그래서 개발된 언어가 바로 C언어입니다.

 

현재 널리 사용되는 모든 운영체제의 커널은 대부분 C언어를 이용해 구현되어 있습니다.

이처럼 C언어는 시스템 프로그래밍에 가장 잘 어울리지만, 응용 프로그래밍에도 많이 사용되는 프로그래밍 언어입니다.

------

#### C언어의 특징

C언어가 가지는 장점은 다음과 같습니다.

 

\1. C언어로 작성된 프로그램은 다양한 하드웨어로의 이식성이 좋습니다.

\2. C언어는 절차 지향 프로그래밍 언어로, 코드가 복잡하지 않아 상대적으로 유지보수가 쉽습니다.

\3. C언어는 저급 언어의 특징을 가지고 있으므로, 어셈블리어 수준으로 하드웨어를 제어할 수 있습니다.

\4. C언어는 코드가 간결하여, 완성된 프로그램의 크기가 작고 실행 속도가 빠릅니다.

 

C언어가 가지는 단점은 다음과 같습니다.

 

\1. C언어는 저급 언어의 특징을 가지고 있으므로, 자바와 같은 다른 고급 언어보다 배우기가 쉽지 않습니다.

\2. C언어는 다른 언어와는 달리 시스템 자원을 직접 제어할 수 있으므로, 프로그래밍하는데 세심한 주의를 기울여야 합니다.

------

#### C언어 표준

C언어는 1989년부터 ANSI(American National Standards Institute)에서 표준화 작업을 진행해왔습니다.

하지만 현재는 ISO/IEC(International Organization for Standardization / International Electrotechnical Commission)에서 표준화를 담당하고 있습니다.

C언어의 최신 표준은 ISO/IEC 9899:2011이며, 줄여서 C11이라고도 부릅니다.

 

C언어 최신 표준에 대한 더 자세한 사항은 다음 pdf 문서를 참고하면 됩니다.

 

[C11 : Committee Draft N1570 ISO/IEC 9899:201x (2011-04-12) =>](http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf)