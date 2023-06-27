import java.sql.*;
import java.util.*;

class Account {
    private String name;
    private int accountNumber;
    private int balance;
    private int days;

    Account(String name, int accountNumber, int balance, int days) {
        this.name = name;
        this.accountNumber = accountNumber;
        this.balance = balance;
        this.days = days;
    }

    public String getName() {
        return name;
    }

    public int getAccountNumber() {
        return accountNumber;
    }

    public int getBalance() {
        return balance;
    }

    public int getDays() {
        return days;
    }

    public void setBalance(int balance) {
        this.balance = balance;
    }

    public void setDays(int days) {
        this.days = days;
    }

    public String toString() {
        return "Name: " + name + ", Account Number: " + accountNumber + ", Balance: " + balance + ", Days: " + days;
    }
}

public class Crypto {
    public static void main(String[] args) throws SQLException {
        Scanner scanner = new Scanner(System.in);

        Connection connection = DriverManager.getConnection("jdbc:sqlite:accounts.db");

        Statement statement = connection.createStatement();
        statement.execute(
                "CREATE TABLE IF NOT EXISTS accounts (name TEXT, accountNumber INTEGER, balance INTEGER, days INTEGER)");

        ArrayList<Account> accounts = new ArrayList<Account>();

        // retrieve existing accounts from database
        ResultSet resultSet = statement.executeQuery("SELECT * FROM accounts");
        while (resultSet.next()) {
            String name = resultSet.getString("name");
            int accountNumber = resultSet.getInt("accountNumber");
            int balance = resultSet.getInt("balance");
            int days = resultSet.getInt("days");
            Account account = new Account(name, accountNumber, balance, days);
            accounts.add(account);
        }

        // prompt user for new account data
        System.out.println("Enter name:");
        String name = scanner.nextLine();

        System.out.println("Enter account number:");
        int accountNumber = scanner.nextInt();

        System.out.println("Enter balance:");
        int balance = scanner.nextInt();

        System.out.println("Enter days:");
        int days = scanner.nextInt();

        // create new account object and add it to the list
        Account account = new Account(name, accountNumber, balance, days);
        accounts.add(account);

        // insert new account data into database
        PreparedStatement preparedStatement = connection
                .prepareStatement("INSERT INTO accounts (name, accountNumber, balance, days) VALUES (?, ?, ?, ?)");
        preparedStatement.setString(1, name);
        preparedStatement.setInt(2, accountNumber);
        preparedStatement.setInt(3, balance);
        preparedStatement.setInt(4, days);
        preparedStatement.executeUpdate();

        // prompt user for account to modify
        System.out.println("Enter account number to modify:");
        int accountNumberToModify = scanner.nextInt();

        // find account in list by account number
        Account accountToModify = null;
        for (Account acc : accounts) {
            if (acc.getAccountNumber() == accountNumberToModify) {
                accountToModify = acc;
                break;
            }
        }

        if (accountToModify != null) {
            // prompt user for new balance and days
            System.out.println("Enter new balance:");
            int newBalance = scanner.nextInt();
            accountToModify.setBalance(newBalance);

            System.out.println("Enter new days:");
            int newDays = scanner.nextInt();
            accountToModify.setDays(newDays);
            // update modified account data in database
            PreparedStatement updateStatement = connection
                    .prepareStatement("UPDATE accounts SET balance = ?, days = ? WHERE accountNumber = ?");
            updateStatement.setInt(1, newBalance);
            updateStatement.setInt(2, newDays);
            updateStatement.setInt(3, accountNumberToModify);
            updateStatement.executeUpdate();
            // display all accounts
            System.out.println("All accounts:");
            for (Account acc : accounts) {
                System.out.println(acc.toString());
            }

            // close database connection and scanner
            connection.close();
            scanner.close();
        }
    }
}

// import java.io.*;
// import java.util.*;

// class Account implements Serializable {
// private static final long serialVersionUID = 1L; // optional but recommended
// String name;
// int accountNumber;
// int balance;
// int days;

// Account(String name, int accountNumber, int balance, int days) {
// this.name = name;
// this.accountNumber = accountNumber;
// this.balance = balance;
// this.days = days;
// }

// public String toString() {
// return "Name: " + name + ", Account Number: " + accountNumber + ", Balance: "
// + balance + ", Days: " + days;
// }
// }

// public class Crypto {
// public static void main(String[] args) throws IOException,
// ClassNotFoundException {
// BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
// ArrayList<Account> accounts = new ArrayList<Account>();
// String name;
// int accountNumber;
// int balance;
// int days;

// System.out.println("Enter number of accounts:");
// int n = Integer.parseInt(br.readLine());

// for (int i = 0; i < n; i++) {
// System.out.println("Enter name:");
// name = br.readLine();

// System.out.println("Enter account number:");
// accountNumber = Integer.parseInt(br.readLine());

// System.out.println("Enter balance:");
// balance = Integer.parseInt(br.readLine());

// System.out.println("Enter days:");
// days = Integer.parseInt(br.readLine());

// Account acc = new Account(name, accountNumber, balance, days);
// accounts.add(acc);
// }

// // create a file object to represent the txt file
// File file = new File("accounts.txt");

// // create a file writer object to write data to the file
// FileWriter fw = new FileWriter(file);

// // create a buffered writer object to wrap the file writer
// BufferedWriter bw = new BufferedWriter(fw);

// // loop through the accounts and write each one to the file
// for (Account acc : accounts) {
// bw.write(acc.toString());
// bw.newLine();
// }

// // close the buffered writer and the file writer
// bw.close();
// fw.close();

// // create a file reader object to read data from the file
// FileReader fr = new FileReader(file);

// // create a buffered reader object to wrap the file reader
// BufferedReader br2 = new BufferedReader(fr);

// // create an array list to store the accounts read from the file
// ArrayList<Account> accountsFromFile = new ArrayList<Account>();

// // read the data from the file and create account objects
// String line;
// while ((line = br2.readLine()) != null) {
// String[] parts = line.split(", ");
// String name1 = parts[0].substring(6);
// int accountNumber1 = Integer.parseInt(parts[1].substring(17));
// int balance1 = Integer.parseInt(parts[2].substring(10));
// int days1 = Integer.parseInt(parts[3].substring(6));
// Account acc = new Account(name1, accountNumber1, balance1, days1);
// accountsFromFile.add(acc);
// }

// // close the buffered reader and the file reader
// br2.close();
// fr.close();

// // filter accounts with more than 794 days and print them
// System.out.println("\nAccounts with more than 794 days:");
// accountsFromFile.stream().filter(acc -> acc.days >
// 794).forEach(System.out::println);

// // filter accounts with more than 3.5 years (1277 days) and print them
// System.out.println("\nAccounts with more than 3.5 years:");
// accountsFromFile.stream().filter(acc -> acc.days >
// 1277).forEach(System.out::println);
// }
// }

// import java.io.*;
// import java.util.*;

// class Account implements Serializable {
// private static final long serialVersionUID = 1L; // optional but recommended
// String name;
// int accountNumber;
// int balance;
// int days;

// Account(String name, int accountNumber, int balance, int days) {
// this.name = name;
// this.accountNumber = accountNumber;
// this.balance = balance;
// this.days = days;
// }

// public String toString() {
// return "Name: " + name + ", Account Number: " + accountNumber + ", Balance: "
// + balance + ", Days: " + days;
// }
// }

// public class Crypto {
// public static void main(String[] args) throws IOException,
// ClassNotFoundException {
// BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
// ArrayList<Account> accounts = new ArrayList<Account>();
// String name;
// int accountNumber;
// int balance;
// int days;

// System.out.println("Enter number of accounts:");
// int n = Integer.parseInt(br.readLine());

// for (int i = 0; i < n; i++) {
// System.out.println("Enter name:");
// name = br.readLine();

// System.out.println("Enter account number:");
// accountNumber = Integer.parseInt(br.readLine());

// System.out.println("Enter balance:");
// balance = Integer.parseInt(br.readLine());

// System.out.println("Enter days:");
// days = Integer.parseInt(br.readLine());

// Account acc = new Account(name, accountNumber, balance, days);
// accounts.add(acc);
// }

// // create a file object to represent the txt file
// File file = new File("accounts.txt");

// // create a file writer object to write data to the file
// FileWriter fw = new FileWriter(file);

// // create a buffered writer object to wrap the file writer
// BufferedWriter bw = new BufferedWriter(fw);

// // loop through the accounts and write each one to the file
// for (Account acc : accounts) {
// bw.write(acc.toString());
// bw.newLine();
// }

// // close the buffered writer and the file writer
// bw.close();
// fw.close();

// // create a file reader object to read data from the file
// FileReader fr = new FileReader(file);

// // create a buffered reader object to wrap the file reader
// BufferedReader br2 = new BufferedReader(fr);

// // print a message to indicate that the data is being read from the file
// System.out.println("\nReading data from the file:");

// // loop until the end of the file and read each line of data
// String line;
// while ((line = br2.readLine()) != null) {
// System.out.println(line);
// }

// // close the buffered reader and the file reader
// br2.close();
// fr.close();
// }
// }
