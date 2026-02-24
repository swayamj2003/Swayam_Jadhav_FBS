
public class BusStopFare {
	
	public static void main(String[] args) {

        String [] stops = {"Shivajinagar","Deccan","Swarget","Karvenagar","Warje","Kothrud"};
        int[] fare = {20, 10, 15, 12, 25};

        String source = "Shivajinagar";
        String destination = "Kothrud";

        int sourceIndex = -1;
        int destinationIndex = -1;

        // Find indexes
        for (int i = 0; i < stops.length; i++) {
            if (stops[i].equals(source)) {
                sourceIndex = i;
            }
            if (stops[i].equals(destination)) {
                destinationIndex = i;
            }
        }

        // Forward-only validation
        if (sourceIndex == -1 || destinationIndex == -1) {
            System.out.println("Invalid source or destination");
            return;
        }

        if (sourceIndex >= destinationIndex) {
            System.out.println("Bus travels forward only");
            return;
        }

        // Fare calculation
        int totalFare = 0;
        for (int i = sourceIndex; i < destinationIndex; i++) {
            totalFare += fare[i];
        }

        System.out.println(
            "Total Fare from " + source + " to " + destination + " = ₹" + totalFare
        );
    }
}
