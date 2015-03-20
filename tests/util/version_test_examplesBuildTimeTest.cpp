#include "CppUTest/TestHarness.h"
#include "version_test_examplesBuildTime.h"

TEST_GROUP(version_test_examplesBuildTime)
{
  version_test_examplesBuildTime* projectBuildTime;

  void setup()
  {
    projectBuildTime = new version_test_examplesBuildTime();
  }
  void teardown()
  {
    delete projectBuildTime;
  }
};

TEST(version_test_examplesBuildTime, Create)
{
  CHECK(0 != projectBuildTime->GetDateTime());
}

