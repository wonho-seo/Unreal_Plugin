📌 프로젝트 개요
이 프로젝트는 언리얼 엔진에서 플러그인을 작성하고 패키징하여 다른 프로젝트에서도 작동할 수 있도록 연습하는 과정을 담고 있습니다.

🛠️ 실습 내용
플러그인 생성 및 패키징을 수행하여 다른 프로젝트에서도 사용할 수 있도록 설정

Build.cs 및 Dependency 설정의 중요성을 학습

🔍 트러블슈팅 및 해결 과정
1️⃣ C++ 파일 생성 방식에 따른 문제
기존에는 언리얼 에디터에서 C++ 파일을 생성했지만, Visual Studio의 .sln에서 직접 생성하는 방식을 시도함.

이 과정에서 .generated.h 파일이 자동 완성되지 않는 문제가 발생함.

해결책: #include "파일명.generated.h"를 수동으로 추가하고, 프로젝트를 완전히 리빌드하여 해결.

2️⃣ 플러그인의 Build.cs 설정 문제
플러그인은 별도의 Build.cs 파일을 사용해야 함.

GameInstanceSubsystem을 사용하는 과정에서 헤더 파일을 읽지 못하는 문제가 발생.

해결책: Build.cs 파일에 올바른 Dependency 설정을 추가하여 컴파일 가능하도록 수정.

3️⃣ GameInstanceSubsystem의 등록 방식
처음에는 GameInstanceSubsystem을 DefaultGame.ini에 등록해야 작동한다고 예상했음.

그러나 등록하지 않아도 정상적으로 작동하는 경우가 있음을 확인.

🚀 배운 점
언리얼 플러그인을 패키징하여 다른 프로젝트에서 사용하는 방법

C++ 코드 작성 시 .sln에서 생성할 경우 주의할 점 (.generated.h 자동완성 문제)

플러그인의 Build.cs에서 올바른 Dependency 설정이 필요함

GameInstanceSubsystem이 .ini 파일에 등록하지 않아도 작동할 수 있음

