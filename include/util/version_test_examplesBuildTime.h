#ifndef D_version_test_examplesBuildTime_H
#define D_version_test_examplesBuildTime_H

///////////////////////////////////////////////////////////////////////////////
//
//  version_test_examplesBuildTime is responsible for recording and reporting when
//  this project library was built
//
///////////////////////////////////////////////////////////////////////////////

class version_test_examplesBuildTime
  {
  public:
    explicit version_test_examplesBuildTime();
    virtual ~version_test_examplesBuildTime();
    
    const char* GetDateTime();

  private:
      
    const char* dateTime;

    version_test_examplesBuildTime(const version_test_examplesBuildTime&);
    version_test_examplesBuildTime& operator=(const version_test_examplesBuildTime&);

  };

#endif  // D_version_test_examplesBuildTime_H
