package lab_8;
import java.util.*;

class SeatsFilledException extends Exception {
    public SeatsFilledException(String message) {
        super(message);
    }
}

class Student {
    private int registrationNumber;
    private String fullName;
    private GregorianCalendar dateOfJoining;
    private short semester;
    private float GPA;
    private float CGPA;
    private static final int MAX_REGISTRATION_NUMBER = 100;
    private static Set<Integer> registrationNumbers = new HashSet<>();

    public Student(int registrationNumber, String fullName, GregorianCalendar dateOfJoining, short semester, float GPA, float CGPA) throws SeatsFilledException {
        int yearOfJoining = dateOfJoining.get(Calendar.YEAR) % 100;
        int maxRegNumber = yearOfJoining * 100 + MAX_REGISTRATION_NUMBER;

        if (registrationNumber > maxRegNumber) {
            throw new SeatsFilledException("Registration number exceeds the limit for the year of joining.");
        }

        if (registrationNumbers.contains(registrationNumber)) {
            throw new IllegalArgumentException("Registration number must be unique.");
        }

        this.registrationNumber = registrationNumber;
        this.fullName = fullName;
        this.dateOfJoining = dateOfJoining;
        this.semester = semester;
        this.GPA = GPA;
        this.CGPA = CGPA;
        registrationNumbers.add(registrationNumber);
    }

    @Override
    public String toString() {
        return "Student{" +
                "Registration Number=" + registrationNumber +
                ", Full Name='" + fullName + '\'' +
                ", Date Of Joining=" + dateOfJoining.getTime() +
                ", Semester=" + semester +
                ", GPA=" + GPA +
                ", CGPA=" + CGPA +
                '}';
    }
}

public class Student_record {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            System.out.print("Enter registration number: ");
            int registrationNumber = scanner.nextInt();
            scanner.nextLine();  // Consume newline

            System.out.print("Enter full name: ");
            String fullName = scanner.nextLine();

            System.out.print("Enter year of joining: ");
            int year = scanner.nextInt();

            System.out.print("Enter month of joining (1-12): ");
            int month = scanner.nextInt() - 1;  // Calendar months are 0-based

            System.out.print("Enter day of joining: ");
            int day = scanner.nextInt();

            GregorianCalendar dateOfJoining = new GregorianCalendar(year, month, day);

            System.out.print("Enter semester: ");
            short semester = scanner.nextShort();

            System.out.print("Enter GPA: ");
            float GPA = scanner.nextFloat();

            System.out.print("Enter CGPA: ");
            float CGPA = scanner.nextFloat();

            Student student = new Student(registrationNumber, fullName, dateOfJoining, semester, GPA, CGPA);
            System.out.println(student);

        } catch (SeatsFilledException e) {
            System.err.println("Exception: " + e.getMessage());
        } catch (IllegalArgumentException e) {
            System.err.println("Exception: " + e.getMessage());
        } finally {
            scanner.close();
        }
    }
}
