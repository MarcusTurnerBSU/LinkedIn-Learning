//components/ColorFrom.js
import React, { useState } from "react";
import { StyleSheet, FlatList, Alert } from "react-native";
import ColorButton from "./components/ColorButton";
import defaultColors from "./data/defaultColors.json";
import ColorForm from "./components/ColorForm";

export default function App() {
  const [backgroundColor, setBackgroundColor] = useState("blue");
  return (
    <>
      <ColorForm onNewColor={newColor => Alert.alert(`TODO: add color ${newColor}`)}/>
      <FlatList style={[styles.container, { backgroundColor }]} 
        data={defaultColors}
        renderItem={({ item }) => {
          return (
            <ColorButton key={item.id} backgroundColor={item.color} onPress={setBackgroundColor} />
          ); 
        }}
      />
    </>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    display: "flex",
  }
});