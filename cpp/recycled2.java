import java.nio.file.*;
public class Solution {
    private static final Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]) throws Exception {
        // read the string filename
        String filename;
        filename = scan.nextLine();

        List<String> lines =Files.readAllLines(Paths.get(filename));
        long bytes =0, count =0;
        for(String line:lines ){
            line = line.trim();
            String words[] = line.split("\\s");
            if(Long.parseLong(words[words.length-1]) > 5000l){
                count++;
                bytes += Long.parseLong(words[words.length-1]);
            }
        } 
        Files.write(Paths.get("bytes_"+filename), (count+"\n"+bytes+"\n").getBytes());
    }
}