# version-test-example
Demonstration of issue with unit testing a quasi-self-versioning set of files.

# Problem Description

I've successfully used the code modeled here in the past to aggregate version information from source and header files in an extensible manner. The problem is that it blows chunks if I try to use it with CppUTest, due to the static list in VersionList.h. Use of a static boolean and function allow me to guarantee the version list is fully populated before any attempt can be made to invoke operator<<(). I'm open to ideas on how I can accomplish the same goals but do it in a way that CppUTest doesn't take exception to. I don't see disabling memory leak detection as a viable solution since I want to use this code in many source modules.
