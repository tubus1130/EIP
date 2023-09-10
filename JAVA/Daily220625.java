public class Soojebi
{
    public static int isPrime(int num){
        for(int i=2;i<num;i++){
            if(num%i == 0){
                return 0;
            }
        }
        return 1;
    }
    
	public static void main(String[] args) {
		int num=100, cnt=0;
		for(int i=2;i<num;i++){
		    cnt = cnt + isPrime(i);
		}
		
		System.out.println(cnt);
	}
}
