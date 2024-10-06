#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Poker_Hands {
public:
  map<string, vector<int>> Selected_Hands; // 조합 이름, 레벨, 칩, 배수 순서.

  void initialize_pokerHand() {              // 레벨, 칩, 배수 순서
    Selected_Hands["High_Card"] = {1, 5, 1}; // 아래 족보에 없는 카드
    Selected_Hands["Pair"] = {1, 10, 2};     // 같은 숫자 2장 * 1쌍
    Selected_Hands["Two_Pair"] = {1, 20, 2}; // 같은 숫자 2장 * 2쌍
    Selected_Hands["Triple"] = {1, 30, 3};   // 같은 숫자 3장 * 1쌍
    Selected_Hands["Straight"] = {1, 30, 4}; // 문양 상관 없이 연속 숫자 5장
    Selected_Hands["Flush"] = {1, 35, 4}; // 숫자 상관 없이 같은 문양 5장
    Selected_Hands["Full_House"] = {1, 40, 4}; // 트리플 + 페어
    Selected_Hands["Four_Card"] = {1, 60, 7};  // 같은 숫자 4장 * 1쌍
    Selected_Hands["Straight_Flush"] = {1, 100, 8}; // 같은 문양 연속 숫자 5장
  }
  void levelup_pokerhand() {
    // code
  }
};

class Trump {
public:
  map<string, map<string, int>> cards; // 스다하클, 숫자(AKQJ포함), 칩 순

  void initialize_Trump() {
    cards["Spade"] = {{"A", 11}, {"K", 10}, {"Q", 10}, {"J", 10}, {"10", 10},
                      {"9", 9},  {"8", 8},  {"7", 7},  {"6", 6},  {"5", 5},
                      {"4", 4},  {"3", 3},  {"2", 2},  {"1", 1}};
    cards["Diamonde"] = {{"A", 11}, {"K", 10}, {"Q", 10}, {"J", 10}, {"10", 10},
                         {"9", 9},  {"8", 8},  {"7", 7},  {"6", 6},  {"5", 5},
                         {"4", 4},  {"3", 3},  {"2", 2},  {"1", 1}};
    cards["Heart"] = {{"A", 11}, {"K", 10}, {"Q", 10}, {"J", 10}, {"10", 10},
                      {"9", 9},  {"8", 8},  {"7", 7},  {"6", 6},  {"5", 5},
                      {"4", 4},  {"3", 3},  {"2", 2},  {"1", 1}};
    cards["Clover"] = {{"A", 11}, {"K", 10}, {"Q", 10}, {"J", 10}, {"10", 10},
                       {"9", 9},  {"8", 8},  {"7", 7},  {"6", 6},  {"5", 5},
                       {"4", 4},  {"3", 3},  {"2", 2},  {"1", 1}};
  }
};

int main() {
  Poker_Hands pokerhands;
  Trump trump;
  pokerhands.initialize_pokerHand();
  trump.initialize_Trump();
  for (const auto &pair : trump.cards["Spade"]) {
    cout << pair.first << ": " << pair.second << endl;
  }
  return 0;
}