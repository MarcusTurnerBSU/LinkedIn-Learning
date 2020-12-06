import React, { useState } from "react"
import { StyleSheet, Text, View, Modal, TouchableOpacity } from "react-native"

export default function App() {
  const [modalVisible, setModalVisible] = useState(false)
  return (
    <View style={styles.container}>
      <View style={styles.container}>
        <Text>This is the main page</Text>
        <TouchableOpacity
          style={styles.button}
          onPress={() => setModalVisible(true)}
        >
          <Text>Info</Text>
        </TouchableOpacity>
      </View>
      <Modal animationType="slide" visible={modalVisible} transparent={false}>
        <View style={styles.modalView}>
          <Text>This is the modal.</Text>
          <TouchableOpacity
            style={styles.button}
            onPress={() => setModalVisible(false)}
          >
            <Text>Close</Text>
          </TouchableOpacity>
        </View>
      </Modal>
    </View>
  )
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "space-around",
    marginTop: 20,
  },
  modalView: {
    alignItems: "center",
    flex: 1,
    backgroundColor: "rgba(150,100,125, 0.9)",
    justifyContent: "space-evenly",
  },
  button: {
    width: 100,
    height: 50,
    borderRadius: 10,
    backgroundColor: "lightblue",
    alignItems: "center",
    justifyContent: "center",
  },
})