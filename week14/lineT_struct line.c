/* kim*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} pointT;

typedef struct {
    pointT start;
    pointT end;
} lineT;

lineT InputLine(void);
double GetLineLength(lineT);

int main() {
    lineT line = InputLine();
    double length = GetLineLength(line);
    printf("선분의 길이는: %.2f\n", length);

    return 0;
}

lineT InputLine() {
    lineT line;
    printf("시작점의 x, y 좌표를 입력하세요: ");
    scanf("%lf,%lf", &line.start.x, &line.start.y);
    printf("끝점의 x, y 좌표를 입력하세요: ");
    scanf("%lf,%lf", &line.end.x, &line.end.y);

    return line;
}

double GetLineLength(lineT line) {
    double dx = line.end.x - line.start.x;
    double dy = line.end.y - line.start.y;

    return sqrt(dx * dx + dy * dy);
}
