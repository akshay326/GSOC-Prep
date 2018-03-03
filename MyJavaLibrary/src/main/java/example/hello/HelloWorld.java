package example.hello;

public class HelloWorld{
    public String hello(int i){
        StringBuilder result = new StringBuilder();

        for(int j = 0;j < i;++j)
            result.append("Hello World \t");

        return result.toString();
    }
}