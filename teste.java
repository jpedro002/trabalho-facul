public class SomaNumeros {
    public static void main(String[] args) {
        long n = 1000000000; // Altere aqui para o valor desejado
        long sum = 0;

        long startTime = System.currentTimeMillis();

        for (long i = 1; i <= n; i++) {
            sum += i;
        }

        long endTime = System.currentTimeMillis();
        double elapsedTime = (endTime - startTime) / 1000.0; // Tempo em segundos

        System.out.println("Resultado: " + sum);
        System.out.println("Tempo de execução: " + elapsedTime + " segundos");
    }
}
