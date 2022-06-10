#include <catch2/catch_test_macros.hpp>

#include<unordered_map>
#include<unordered_set>
#include<string>
#include<iostream>

using namespace std;

bool canConstructHelper(string st, vector<string>& stringArray, unordered_map<string, bool>& mem) {
    if (st.empty()) {
        return true;
    }
    auto found = mem.find(st);
    if (found != mem.end()) {
        return found->second;
    }

    auto arSize = stringArray.size();
    for (int i = 0; i < arSize; ++i) {
        string wordPart = stringArray[i];
        auto f = st.find(wordPart);
        if (f > st.size()) {
            continue;
        }
        if (f == 0) {
            string subStrRight = st.substr(wordPart.size());
            if (canConstructHelper(subStrRight, stringArray, mem)) {
                mem[st] = true;
                return true;
            }
        }
    }

    mem[st] = false;
    return false;
}

bool canConstruct(string st, vector<string> stringArray) {
    unordered_map<string, bool> mem;
    return canConstructHelper(st, stringArray, mem);
}

TEST_CASE( "canConstruct abcdef", "[b]" ) {
    REQUIRE( canConstruct("abcdef", {"ab", "abc", "cd", "def", "abcd", "kf"}) == true );
    REQUIRE( canConstruct("skateboard", {"bo", "rd", "ate", "def", "abcd", "kf"}) == false );
    REQUIRE( canConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", {"ee", "eee", "e", "eeee", "eeeee", "eeeeee"}) == false );
}