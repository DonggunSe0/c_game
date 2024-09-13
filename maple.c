메이플스토리 보물찾기 퀘스트

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

​

int main() {

    int player = 0;

    int com = 0;

    int round = 0;

    int result[3] = {0};

    int sum;

    char nick_name[10];

​

    printf("\n불에 타버린  메이플 월드를 위해 돈좀 구해줘!!\n");

​

    srand(time(NULL)); // 난수 초기화

    printf("촌장님 : %s 용사여 검은 마법사로 인해 불타버린 메이플 월드 때문에 많은 시민들이 힘들어 하고있다.\n", nick_name);

    printf("Q:10번의 기회가 주어지고 메이플 월드를 복구 하기 위해선 30000메소 이상의 재화가 필요하다.\n");

    printf("용사여 믿는다..! 모든 메이플 월드의 희망을... \n");

​

    while (player != -1) {

        com = rand() % 3 + 1;

        printf("\n 어...? 상자들이 떨어져있네?");

        printf("\n 반짝반짝_상자(1), 허름한_상자(2), 요정의_상자(3) or -1 to end: "");

        scanf("%d", &player);

​

        if (player == -1) {

            printf("종료\n");

            break; // 게임 종료

        } else if (player < 1 || player > 3) {

            printf("Invalid input. Please enter 1, 2, 3, or -1.\n");

            continue; // 잘못된 입력은 무시하고 다시 입력 요청

        }

​

        round++;

​

        if (com == player) {

            printf("상자에 무언가가 있다!\n");

            printf("1000메소\n");

            result[0]++;

        } else if ((com == 1 && player == 3) || (com == 2 && player == 1) || (com == 3 && player == 2)) {

            printf("텅 비어있음\n");

            result[2]++;

        } else {

            printf("반짝이는 무언가가 있다!!!\n");

            printf("보물\n");

            result[1]++;

        }

    }

​

  sum = 1000 * result[0] + 10000 * result[1];

​

    printf("Game results:\n");

    printf("Total rounds: %d\n", round);

    printf("1000메소: %d\n", result[0]);

    printf("보물(10000메소): %d\n", result[1]);

    printf("비어있음: %d\n", result[2]);

    printf("%s님은 %d메소를 획득하셨습니다.\n", nick_name, sum);

​

if (sum > 30000) {

​

               printf("\n퀘스트 성공\n");

               printf("\n촌장님 : %s가 메이플 월드를 구했다!!!!\n", nick_name);

               printf("\n마을 주민 : %s님이 무려 %d메소를 구해 오셨다!!!!!!\n", nick_name, sum);

​

       } else{

​

               printf("\n퀘스트 실패\n");

               printf("\n촌장님 : %s 가 아무리 도와줘도 무리였나...;;", nick_name);

               printf("\n검은 마법사 : %s야 너의 힘으론 아무것도 할 수 없다. 메이플 월드는 우리의 것!!\n", nick_name);

               printf("\n음핳핳하ㅏㅎ하하하ㅏ....!!!!!!!!!");

       }

    return 0;​

}
