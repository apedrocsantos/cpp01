# CPP01

## Memory allocation

Use `new` and `delete` instead of `malloc`and `free`, as these keywords call the constructors and destructors of objects and can be used with other types.

## Create and delete array of instances

```CPP
Student *students = new Student[10]; // creates array of students
delete [] students; // deletes array of students
```

## References

A **reference** is an alias to an existing variable. **It's a pointer that is constant, always dereferenced and never void.**

```CPP
int &ballsRef = numberOfBalls;
std::cout << ballsRef;
ballsRef = 44; //change value of ref
```

We can't create an uninitialized reference, it has always to be a reference to something.

Use pointers when creating variables that may not exist or that may change.

## Filestreams

There are three types of stream objects for working with files: ifstream (input file stream), ofstream (output file stream) and fstream (bidirectional file stream).

```CPP
std::ifstream ifs("numbers");
unsigned int dst;
unsigned int dst2;

ifs >> dst >> dst2; // reads two int from ifs.

std::cout << dst << " " << dst2 << std::endl;
ifs.close();

std::ofstream ofs("test.out");

ofs << "Text to output\n";
ofs.close();
```
<br><br>