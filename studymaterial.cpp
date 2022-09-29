// nassim marhari
// cs2 midterm study material
// based off of:
// example midterm + in class programs + slides

this is not finished yet

// PROBABLY PRETTY IMPORTANT
{
	Abstract data type has 3 things.
	
		1. Data 					// some memory
		2. Operations on the data	// set of methods/functions that work on the data
		3. Rules of usage.			// set of usage rules (about how it behaves)
	
	
	Examples of ADT's
	
		1. Integers
		2. Booleans
		3. Floating points
	
	
	Good vocabulary
	
		1. Encapsulation // binds data and operations in one place
		2. Information hiding // private and public information
			- cpp and hpp files. // separate declaration from implementation (hiding it)
		3. Class // declares a data type (person, employee)
		4. Object // instance of a class (joe, sue)
	
	
	ALWAYS use include guards
	
	// in the cpp file
		1. #include // include your hpp file
	// in the hpp file
		2. #ifndef // if "file" is not defined
		3. #define // define it as...
			// class Point {...}
		4. #endif  // ... end the if statement
		5.		   // leave empty line under endif statement
	
	
	Golden rules of C++
	
		1. Always define include guards for .hpp files
		2. Always define default constructor for a class even if it does nothing
	
	
	Assertions, PRE/POST conditions, invariants
	
		1. Assertion (ASSERT) // statement that is true at specific point in program
		2. Pre-Condition (REQUIRES) // statement that must be true before
									// a method/function is called/executed
		3. Post-condition (ENSURES) // statement that is true after a method/function ''
		4. Invariants
			- LOOP INV // statement that is always true within scope of a loop
			- CLASS INV // statement that is always true for object of a given class/type
			- GLOBAL INV // statement that is always true globally.
		// RetVal - return value.
		
	
	Const City
	
		1. Reference (&) // no copy is done
			- set operator+(set&);
		2. Const (const) // protects argument from modification
			- set operator+(const set);
		3. Const reference or Const ref // no copy is done and protects argument from modification
		// Const reference or const ref: set operator+(const set&);
		4. Const METHODS and their usage:
			// for example: a + b or a.operator+(b); 
			// object a should not be modified, use const method
				 set operator+(const set&) const; // note const is outside parenthesis
			// object b should not be modified, use const& (const ref) 
			// this will only return a result
			// const methods can NOT modify object it is being called upon
			// in this case it is being called upon a so a will not be modified.
			
			
	L values and R values
	
		1. L values can be on left or right side of assignment.
			// l values can be passed by reference or by value
		2. R values can not be on left side of assignment
			// r values can be passed by value, NOT by reference. they shouldnt be modified
			// can be passed by const ref since it does not modify it.
			// example: a = a + 20;
			// a is l value, it can be and is being modified
			// 20 is r-value because how tf you gonna modify 20?
			
		3. All literals and const objects are r-values.
		
	
	This
	
		1. This // is a keyword
		2. This // is a pointer
		3. This // points to the object that a method is being invoked upon
			
}


// EXAMPLE QUESTIONS
{

	From sample midterm:
	
		1. What are three components of an Abstract Data Type?
			
			// A: Data, Operations on the data, and rules of usage.
			
		2. Given the class below, write a member function that checks
		   if two strings are equal. Give pre and post conditions.
			   
		class String {
		public:
			string () { s[0] = 0; };
			bool operator==(const string&) const;
		private:
			char s[256];
		};
	
		
			// A:
			/*
			bool string::operator==(const string& rhs) const {
				for(i = 0; i < 256-1; ++i) {
					if(rhs.s[i] != s[i]) return false;
				}
				return true;
			}
			*/

	
}







// PROBABLY NOT THAT IMPORTANT
{
	
	Subtle things to remember
	
		1. character arrays are null terminating // there is a 0 at the end.
		2. all classes need a default constructor.
			// if you declare an array of a type which doesnt have default constructor
			// you will get an error. default const is called for each element of array.
			// default constructor can do nothing


	C++ Compilation 		// no not like a call of duty trickshot compilation
	
		1. Preprocessing
			- Includes hpp files
			- evaluates #ifndef and #define
			- instantiates templates
			- platform INDEPENDENT
		2. Compilation
			- lexical analysis // builds symbol table
			- syntactic analysis // parses code
			- semantic analysis
			- syntax errors will be generated
			- generates intermediate representation
			- platform INDEPENDENT
		3. Code Generation
			- optimization done at ir level
			- convert ir to platform specific assembler
			- run assembler to convert to machine code
			- platform DEPENDENT
		4. Linking
			- links all separate object files
			- links all associated libraries
			- links the single main
			- linker errors occur
			- creates executable file
			- platform DEPENDENT
		5. Execution
			- loader reads exe from disk and loads to memory
			- cpu executes each machine instruction
			- runtime errors occur if any
		
		
}
