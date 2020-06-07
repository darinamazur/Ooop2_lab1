#include <gtest/gtest.h>
#include "functional.h"
#include "group.hpp"
#include "song.hpp"

TEST(testCheck,testFunc){
    int a = 5, b = 8;
    int actual = sum(a,b);
    int expected = 13;
    ASSERT_EQ(expected,actual);
}

TEST(testProcessSong,test1){
    Song s1,s2;
    s1.stars=2;
    Group g;
    Song s3 = g.processSong(s2);
    ASSERT_EQ(s1.stars,s3.stars);
}
TEST(testProcessSong,test2){
    Song s1,s2;
    s1.stars=2;
    Group g;
    Song s3 = g.processSong(s2);
    ASSERT_EQ(s1.stars,s3.stars);
}
TEST(testProcessSong,test3){
    Song s1,s2;
    s1.stars=2;
    Group g;
    Song s3 = g.processSong(s2);
    ASSERT_EQ(s1.stars,s3.stars);
}
TEST(testProcessSong,test4){
    Song s1,s2;
    s1.stars=2;
    Group g;
    Song s3 = g.processSong(s2);
    ASSERT_EQ(s1.stars,s3.stars);
}
int main(int argc, char*argv[]){

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}
