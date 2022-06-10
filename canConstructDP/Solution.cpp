#include <catch2/catch_test_macros.hpp>

#include<unordered_map>
#include<unordered_set>
#include<string>
#include<iostream>

using namespace std;

bool canConstruct(string st, vector<string> stringArray) {
    auto arSize = stringArray.size();
    for (int i = 0; i < arSize; ++i) {
        auto f = st.find(stringArray[i]);
        cout << stringArray[i] << " : " << f << endl;
    }
    return true;
}

TEST_CASE( "canConstruct abcdef", "[b]" ) {
    REQUIRE( canConstruct("abcdef", {"ab", "abc", "cd", "def", "abcd"}) == true );
}