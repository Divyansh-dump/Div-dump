package lab_8;
import java.util.Scanner;
class InvalidDayException extends Exception {
    public InvalidDayException(String message) {
        super(message);
    }
}

class InvalidMonthException extends Exception {
    public InvalidMonthException(String message) {
        super(message);
    }
}

class CurrentDate {
    private int day;
    private int month;
    private int year;

    public void createDate() throws InvalidDayException, InvalidMonthException {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter day: ");
        day = scanner.nextInt();
        if (day < 1 || day > 31) {
            throw new InvalidDayException("Invalid day: " + day);
        }

        System.out.print("Enter month: ");
        month = scanner.nextInt();
        if (month < 1 || month > 12) {
            throw new InvalidMonthException("Invalid month: " + month);
        }

        System.out.print("Enter year: ");
        year = scanner.nextInt();

        System.out.println("Date is valid: " + this);
    }

    @Override
    public String toString() {
        return day + "/" + month + "/" + year;
    }
}

public class TestCurrentDate {
    public static void main(String[] args) {
        CurrentDate currentDate = new CurrentDate();
        try {
            currentDate.createDate();
        } catch (InvalidDayException | InvalidMonthException e) {
            System.out.println(e.getMessage());
        }
    }
}
