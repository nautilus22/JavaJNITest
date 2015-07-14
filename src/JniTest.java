public class JniTest {

    public static void main(String[] args) {
	// write your code here

    }

    static {
        System.loadLibrary("TESTDLL");
    }

    public native void   printHelloWorld();
    public native int    AddINT(int arg1, int arg2);
    public native double addDBL(double arg1, double arg2);
    public native String getStr(String str);

    int a = 0;
}
